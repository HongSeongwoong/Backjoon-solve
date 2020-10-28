#include<iostream>
#include<algorithm>
using namespace std;

int arr[11][11];
int n;
int res = 987654321;
bool flag[11];

void dfs(int idx, int sum, int depth) {
	if (sum >= res) return;
	if (depth == n - 1&&arr[idx][0]) {
		res = min(res, sum + arr[idx][0]);
	}
	for (int i = 1; i < n; i++) {
		if (flag[i] || !arr[idx][i]) continue;
		flag[i] = 1;
		dfs(i, sum + arr[idx][i], depth + 1);
		flag[i] = 0;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	dfs(0, 0, 0);
	cout << res << '\n';
}