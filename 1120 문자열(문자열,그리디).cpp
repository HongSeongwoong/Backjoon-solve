#include<iostream>
#include<string>
#include<algorithm>
using namespace std;



int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	string a, b;
	int res = 51;
	cin >> a >> b;
	int len = b.length() - a.length();
	for (int i = 0; i <= len; i++) {
		int tmp = 0;
		for (int j = 0; j < a.length(); j++) {
			if (a[j] != b[j + i]) {
				tmp++;
			}
		}
		res = min(res, tmp);
	}
	cout << res << '\n';
}