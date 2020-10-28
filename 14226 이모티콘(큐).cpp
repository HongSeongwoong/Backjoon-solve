#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<queue>
using namespace std;
queue<pair<int, int>> q;
bool visited[2002][2002];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int s;
	cin >> s;
	q.push(make_pair(1, 0));
	int cnt = 0;
	while (!q.empty()) {
		int i = q.size();
		while (i--) {
			int len = q.front().first;
			int clip = q.front().second;

			q.pop();
			if (len == s) {
				cout << cnt << '\n';
				return 0;
			}

			int c = len;
			q.push(make_pair(len, c));

			if (clip != -1) {
				int l = len + clip;
				if (!visited[l][clip] && l <= 1000) {
					q.push(make_pair(l, clip));
					visited[l][clip] = 1;
				}
			}

			int l = len - 1;
			if (!visited[l][clip] && 1 < l) {
				q.push(make_pair(l, clip));
				visited[l][clip] = 1;
			}
		}
		cnt++;
	}
}