#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

typedef long long ll;
ll ans[16];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	int cnt = 2;
	for (int i = 1; i <= 15; i++) {
		ans[i] = pow(cnt + (1 << (i - 1)), 2);
		cnt += 1 << (i - 1);
	}
	cout << ans[n];
}