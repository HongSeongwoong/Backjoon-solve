#include<iostream>
#include<deque>
#include<queue>
using namespace std;
int a, b;
deque<int> dq;
queue<int> q;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> a >> b;
	for (int i = 1; i <= a; i++) {
		dq.push_back(i);
	}
	for (int i = 0; i < b; i++) {
		int num; cin >> num;
		q.push(num);
	}
	int cnt = 0;
	while (q.size()) {
		int target = q.front();
		q.pop();
		int index;
		int len = dq.size();
		for (int i = 0; i < len; i++) {
			if (dq[i] == target) {
				index = i;
				break;
			}
		}
		if (index <= len / 2) {
			while (index--) {
				int tmp=dq.front();
				dq.pop_front();
				dq.push_back(tmp);
				cnt++;
			}
		}
		else {
			while (index != len) {
				int tmp = dq.back();
				dq.pop_back();
				dq.push_front(tmp);
				cnt++;
				index++;
			}
		}
		dq.pop_front();
	}
	cout << cnt << '\n';
}