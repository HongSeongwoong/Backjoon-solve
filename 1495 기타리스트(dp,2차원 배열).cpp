#include<iostream>
#include<algorithm>

using namespace std;
int n, s, m;
int vol[101];
int dp[101][1001];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n >> s >> m;
	for (int i = 1; i <= n; i++) {
		cin >> vol[i];
	}
	dp[0][s] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			if (dp[i - 1][j]) {
				if (j + vol[i] <= m) {
					dp[i][j + vol[i]] = 1;
				}
				if (j - vol[i] >= 0) {
					dp[i][j - vol[i]] = 1;
				}
			}
		}
	}
	int ans=-1;
	for (int i = m; i >= 0; i--) {
		if (dp[n][i]) {
			ans = i;
			break;
		}
	}
	cout << ans;
}