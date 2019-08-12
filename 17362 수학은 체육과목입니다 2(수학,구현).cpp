#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	int ans = n % 8;
	if (ans > 0 && ans < 6) {
		cout << ans;
	}
	else if (ans == 0) {
		cout << 2;
	}
	else if(ans==7) {
		cout << 3;
	}
	else if (ans == 6) {
		cout << 4;
	}
}