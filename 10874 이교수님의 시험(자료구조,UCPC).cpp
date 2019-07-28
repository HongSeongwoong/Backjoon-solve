#include<iostream>
#include<string.h>
#include<queue>
using namespace std;

int arr[11];
bool flag[11];
queue<int> q;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	for (int i = 1; i <= 10; i++) {
		arr[i] = (i-1)%5+1;
	}
	for (int i = 1; i <= n; i++) {
		memset(flag, 0, sizeof(flag));
		for (int j = 1; j <= 10; j++) {
			int ans;
			cin >> ans;
			if (ans == arr[j]) {
				flag[j] = true;
			}
		}
		bool check = false;
		for (int j = 1; j <= 10; j++) {
			if (!flag[j]) {
				check = false;
				break;
			}
			else
				check = true;
		}
		if (check)
			q.push(i);
	}
	while (q.size()) {
		cout << q.front() << '\n';
		q.pop();
	}
}