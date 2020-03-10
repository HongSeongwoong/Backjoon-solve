#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> v;
bool flag[201][201];
bool visit[201];
int res = 0;
int n, m;

bool chk() {
	if (flag[v[0]][v[1]] || flag[v[1]][v[2]] || flag[v[0]][v[2]]) return false;
	return true;
}
void select(int idx, int cnt) {
	if (cnt == 3) {
		if (chk()) res++;
		return;
	}
	for (int i = idx; i <= n; i++) {
		if (visit[i]) continue;
		visit[i] = 1;
		v.push_back(i);
		select(i, cnt + 1);
		v.pop_back();
		visit[i] = 0;
	}

}

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		flag[a][b] = 1; flag[b][a] = true;
	}
	select(1, 0);
	cout << res << '\n';
}