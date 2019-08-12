#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n >> m;
	int am=1000, bm=1000;
	int ans = 0;
	while (m--) {
		int a, b;
		cin >> a >> b;
		am = min(am, a);
		bm = min(bm, b);
	}
	if (am < 6 * bm) {
		ans += am * (n / 6);
	}
	else {
		ans += bm * (n / 6) * 6;
	}
	n %= 6;
	if (am < n*bm) {
		ans += am;
	}
	else {
		ans += bm * n;
	}
	cout << ans;
}