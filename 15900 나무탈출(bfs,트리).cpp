#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v[500001];
queue<pair<int,int>> q;
bool flag[500001];
long long cnt;
void bfs() {
	q.push({ 1,0 });
	flag[1] = true;
	while (q.size()) {
		int s = q.front().first;
		int d = q.front().second;
		q.pop();
		if (v[s].size() == 1 && flag[v[s][0]]) {
			cnt += d;
		}
		for (int i = 0; i < v[s].size(); i++) {
			int next = v[s][i];
			if (flag[next]) {
				continue;
			}
			q.push({ next,d+1 });
			flag[next] = true;
		}
	}
	if (cnt % 2) {
		cout << "Yes";
	}
	else
		cout << "No";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n-1; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	bfs();
}