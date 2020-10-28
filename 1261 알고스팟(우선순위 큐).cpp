#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<queue>
using namespace std;

int n, m;
int map[101][101];
bool visited[101][101];
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };
priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> q;


int bfs() {
	q.push({ 0,{ 0 ,0 } });
	visited[0][0] = 1;
	while (q.size()) {
		int y = q.top().second.first;
		int x = q.top().second.second;
		int block = q.top().first;
		q.pop();
		if (y == n - 1 && x == m - 1) {
			return block;
		}
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (nx<0 || nx>m - 1 || ny<0 || ny>n - 1) continue;
			if (!visited[ny][nx]) {
				if (map[ny][nx] == 0) {
					q.push({ block,{ ny, nx } });
				}
				else {
					q.push({ block + 1,{ ny, nx } });
				}
				visited[ny][nx] = 1;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> m >> n;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < m; j++) {
			map[i][j] = s[j] - '0';
		}
	}
	cout << bfs() << '\n';
}