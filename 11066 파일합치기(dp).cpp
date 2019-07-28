#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

typedef long long ll;
ll dp[505][505];
ll sum[505];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int k;
		cin >> k;
		for (int i = 1; i <= k; i++) {
			cin >> sum[i];
			sum[i] += sum[i - 1];
		}
		for (int d = 1; d < k; d++) {
			for (int i = 1; i+d <= k; i++) {
				int j = i + d;
				dp[i][j] = 987654321;
				for (int mid = i; mid < j; mid++) {
					dp[i][j] = min(dp[i][j], dp[i][mid] + dp[mid + 1][j] + sum[j] - sum[i-1]);
				}
			}
		}
		cout << dp[1][k] << '\n';
	}

}