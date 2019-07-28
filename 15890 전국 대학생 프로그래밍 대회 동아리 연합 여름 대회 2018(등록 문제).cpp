#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	int A = 0, B = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			A += (a[i] & b[j]) % 1999;
			B &= (a[i] + b[j]);
		}
	}
	cout << A << ' ' << B;
}