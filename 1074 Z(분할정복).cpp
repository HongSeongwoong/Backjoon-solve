#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int r, c;
long long n;
long long ans;

void z(int y, int x, long long N){
	if (N == 2) {
		if (y == r && x == c) {
			cout << ans << '\n';
			return;
		}
		ans++;
		if (y == r && x + 1 == c) {
			cout << ans << '\n';
			return;
		}
		ans++;
		if (y+1 == r && x == c) {
			cout << ans << '\n';
			return;
		}
		ans++;
		if (y+1 == r && x + 1 == c) {
			cout << ans << '\n';
			return;
		}
		ans++;
		return;
	}
	z(y, x, N / 2);
	z(y, x + N / 2, N / 2);
	z(y + N / 2, x, N / 2);
	z(y + N / 2, x + N / 2, N / 2);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n>>r >> c;
	z(0, 0,1<< n);
}