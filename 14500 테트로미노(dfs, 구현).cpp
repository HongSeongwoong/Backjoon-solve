#include<iostream>
#include<string>
#include<algorithm>
using namespace  std;

int n;
int m;
int dy[] = { 0,1,0,-1 };
int dx[] = { 1,0,-1,0 };
int arr[501][501];
bool flag[501][501];

int ex[4][4] = { {0, 0, 0, 1}, {0, 1, 2, 1}, {0, 0, 0, -1}, {0, -1, 0, 1} };
int ey[4][4] = { {0, 1, 2, 1}, {0, 0, 0, 1}, {0, 1, 2, 1}, {0, 1, 1, 1} };
 
int res = -1;
void dfs(int x, int y, int sum, int depth) {
	if (depth == 4) {
		res = max(sum, res);
		return;
	}
	for(int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
			continue;
		}
		if (!flag[nx][ny]) {
			flag[nx][ny] = 1;
			dfs(nx, ny, sum + arr[nx][ny], depth + 1);
			flag[nx][ny] = 0;
		}
	}
}
void ex_shape(int x, int y) {

	for (int i = 0; i < 4; i++) {
		bool chk = false;
		int sum = 0;
		for (int j = 0; j < 4; j++) {
			int nx = x + ex[i][j];
			int ny = y + ey[i][j];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
				chk = 1;
				break;
			}
			sum += arr[nx][ny];
		}
		if (!chk) {
			res = max(res, sum);
		}
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n >> m;
	for (int i=0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			flag[i][j] = true;
			dfs(i, j, arr[i][j], 1);
			flag[i][j] = false;

			ex_shape(i, j);
		}
	}
	cout << res << '\n';
}