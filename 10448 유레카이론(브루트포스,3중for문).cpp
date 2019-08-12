#include<iostream>
#include<algorithm>

using namespace std;

int t[46];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int T;
	cin >> T;
	for (int i = 1; i < 46; i++) {
		t[i] = i * (i + 1) / 2;
	}
	while (T--) {
		int n;
		cin >> n;
		bool flag = false;
		for (int i = 1; i < 46; i++) {
			for (int j = 1; j < 46; j++) {
				for (int k = 1; k < 46; k++) {
					if (t[i] + t[j] + t[k] == n) {
						flag = true;
						break;
					}
				}
			}
		}
		cout << flag<<'\n';
	}
}