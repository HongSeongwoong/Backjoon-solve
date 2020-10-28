#include<iostream>
#include<queue>
#include<math.h>
using namespace std;
void make_arr(int n);

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	while (1) {
		int n;
		cin >> n;
		if (n == -1) break;
		make_arr(n);
	}
}

void make_arr(int n) {
	priority_queue<int, vector<int>, greater<int>> q;
	q.push(1);
	int sum = 1;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			q.push(i);
			q.push(n / i);
			sum += (i)+(n / i);
		}
	}
	if (sum == n) {
		cout << n << " = ";
		while (!q.empty()) {
			cout << q.top();
			if (q.size() == 1) {
				cout << '\n';
			}
			else {
				cout << " + ";
			}
			q.pop();
		}
	}
	else cout << n << " is NOT perfect.\n";
}