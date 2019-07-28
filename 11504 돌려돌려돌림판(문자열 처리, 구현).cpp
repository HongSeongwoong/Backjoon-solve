#include<iostream>
#include<string>
#include<vector>
#include<queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t, n, m;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		string sx, sy;
		for (int j = 0; j < m; j++) {
			char tmp;
			cin >> tmp;
			sx += tmp;
		}
		for (int j = 0; j < m; j++) {
			char tmp;
			cin >> tmp;
			sy += tmp;
		}
		vector<char> v(n);
		queue<int> q;
		for (int i = 0; i < n; i++) {
			cin >> v[i];
			if (v[i] - '0' >= sx.front() - '0'&&v[i] - '0' <= sy.front() - '0') {
				q.push(i);
			}
		}
		int cnt = 0;
		while (q.size()) {
			int idx = q.front();
			q.pop();
			string tmp;
			for (int i = idx; i < idx + m; i++) {
				tmp +=v[i%n];
			}
			int x = stoi(sx), y = stoi(sy), z = stoi(tmp);
			if (x <= z && z <= y)
				cnt++;
		}
		cout << cnt<<'\n';
	}
}