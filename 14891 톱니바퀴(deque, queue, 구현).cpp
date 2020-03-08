#include<iostream>
#include<algorithm>
#include<queue>
#include<deque>
#include<string>
#include<cstdlib>
using namespace std;

deque<int> gear[5];

void spin(int num, int dir) {
	if (dir == 1) {
		gear[num].push_front(gear[num].back());
		gear[num].pop_back();
	}
	else {
		gear[num].push_back(gear[num].front());
		gear[num].pop_front();
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	for (int i = 1; i < 5; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < 8; j++) {
			gear[i].push_back(s[j] - '0');
		}
	}
	int k;
	cin >> k;
	for (int i = 0; i < k; i++) {
		int num, dir;
		cin >> num >> dir;
		queue<pair<int, int>> q;
		q.push({ num,dir });

		int idx = num;
		int tmp_dir = dir;
		while (1) {
			if (idx == 4) {
				break;
			}
			else {
				idx++;
				tmp_dir *= -1;
				if (gear[idx - 1][2]!=gear[idx][6]) {
					q.push({ idx,tmp_dir });
				}
				else 
					break;
			}
		}
		idx = num;
		tmp_dir = dir;
		while (1) {
			if (idx == 1) {
				break;
			}
			else {
				idx--;
				tmp_dir *= -1;
				if (gear[idx][2]!=gear[idx + 1][6]) {
					q.push({ idx,tmp_dir });
				}
				else 
					break;
			}
		}
		while (q.size()) {
			spin(q.front().first, q.front().second);
			q.pop();
		}
	}
	int res = 0;
	for (int i = 1,j=1; i < 5; i++,j*=2) {
		if (gear[i][0]) {
			res += j;
		}
	}
	cout << res << '\n';
}