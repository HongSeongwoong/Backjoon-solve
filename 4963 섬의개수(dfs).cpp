#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;

int w, h;
bool map[51][51];
bool chk[51][51];

int dx[] = { 1,1,1,0,0,-1,-1,-1 };
int dy[] = { 1,0,-1,1,-1,1,0,-1 };

void dfs(int x, int y) {
	chk[x][y] = 1;
	for (int i = 0; i < 8; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx >= h || ny < 0 || ny >= w)continue;

		if (!chk[nx][ny] && map[nx][ny]) {
			dfs(nx, ny);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	while (1) {
		cin >> w >> h;
		if (w == 0 && h == 0) break;
		memset(map, 0, sizeof(map));
		memset(chk, 0, sizeof(map));
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> map[i][j];
			}
		}
		int cnt = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (!chk[i][j] && map[i][j]) {
					cnt++;
					dfs(i, j);
				}
			}
		}
		cout << cnt << '\n';
	}
}