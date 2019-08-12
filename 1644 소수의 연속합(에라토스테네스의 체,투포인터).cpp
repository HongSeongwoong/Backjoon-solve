#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
bool flag[4000001];
vector<int> p;

void sol(int num) {
	int low = 0, high = 0;
	int sum = 0;
	int cnt = 0;
	while (1) {
		if (sum >= num) {
			sum -= p[low++];
		}
		else if (high == p.size()) {
			break;
		}
		else {
			sum += p[high++];
		}
		if (sum == num) {
			cnt++;
		}
	}
	cout << cnt;
}

void Prime(int num) {
	for (int i = 2; i*i <= num; i++) {
		if (flag[i]) {
			continue;
		}
		for (int j = i * i; j <= num; j += i) {
			flag[j] = 1;
		}
	}
	for (int i = 2; i <= num; i++) {
		if (!flag[i]) {
			p.push_back(i);
		}
	}
	sol(num);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;

	Prime(n);
}