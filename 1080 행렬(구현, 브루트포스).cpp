#include<iostream>
#include<string>

using namespace std;

bool arr_A[51][51];
bool arr_B[51][51];

void XOR(int y, int x) {
	for (int i = y; i < y + 3; i++) {
		for (int j = x; j < x + 3; j++) {
			int tmp = arr_A[i][j];
			arr_A[i][j] = 1 - tmp;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, m;
	cin >> n >> m;
	
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < s.length(); j++) {
			arr_A[i][j] = s[j] - '0';
		}
	}
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < s.length(); j++) {
			arr_B[i][j] = s[j] - '0';
		}
	}
	int cnt = 0;
	bool chk=false;

	if (n >= 3 && m >= 3) {
		for (int y = 0; y <= n - 3; y++) {
			for (int x = 0; x <= m - 3; x++) {
				if (arr_A[y][x] != arr_B[y][x]) {
					XOR(y, x);
					cnt++;
				}

				bool flag = true;
				for (int i = 0; i < n;  i++) {
					for (int j = 0; j <m; j++) {
						if (arr_A[i][j] != arr_B[i][j]) {
							flag = false;;
							break;
						}
					}
				}
				if (flag) {
					chk = true;
					break;
				}
			}
			if (chk) break;
		}
	}
	else {
		chk = true;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (arr_A[i][j] != arr_B[i][j]) {
					chk = false;
				}
			}
		}
	}
	if (chk) cout << cnt << '\n';
	else cout << -1 << '\n';
}