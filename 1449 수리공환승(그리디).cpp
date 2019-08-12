#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int check[2002];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, l;
	cin >> n >> l;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		check[num] = 1;
	}
	int cnt = 0;
	for (int i = 0; i < 1001; i++) {
		if (check[i]) {
			cnt++;
			for (int j = i; j <= i + l - 1; j++) {
				check[j] = 0;
			}
		}
	}
	cout << cnt;
}