#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int arr[10001];

void sol(int n) {
	int a=0, b=987654321;
	for (int i = 2; i <= n/2; i++) {
		if (!arr[i] && !arr[n - i]) {
			if (abs(b - a)>abs(n-2*i)) {
				if (n - i > i) {
					b = n - i; a=i;
				}
				else {
					a=n-i; b=i;
				}
			}
		}
	}
	cout << a << ' ' << b << '\n';
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	for (int i = 2; i <= 10000; i++) {
		if (arr[i])
			continue;
		for (int j = i * i; j <= 10000; j += i) {
			arr[j] = true;
		}
	}
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		sol(n);
	}
}