#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
using namespace std;

bool btn[10];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	int t;
	cin >> n >> t;
	while (t--) {
		int num;
		cin >> num; btn[num] = true;
	}
	int num = 100;
	int ans = abs(100 - n);
	for (int i = 0; i <= 1000000; i++) {
		string tmp = to_string(i);
		int cnt = tmp.length();
		bool flag = false;
		for (int i = 0; i < cnt; i++) {
			int val = tmp[i] - '0';
			if (btn[val]) {
				flag = true;
				break;
			}
		}
		if (!flag) {
			ans = min(ans, cnt + abs(i - n));
		}
	}
	cout << ans;
}