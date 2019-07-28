#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;

deque<int> dq;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		dq.push_back(i);
	}
	while (1) {
		if (dq.size() == 1)
			break;
		dq.pop_front();
		if (dq.size() == 1)
			break;
		int tmp = dq.front();
		dq.pop_front();
		dq.push_back(tmp);
	}
	cout << dq.front();
}
