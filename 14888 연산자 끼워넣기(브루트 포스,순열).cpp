#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace  std;
typedef long long ll;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	ll MIN = 1000000000;
	ll MAX = -1000000000;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	vector<int> oper;
	for (int i = 0; i < 4; i++) {
		int cnt;
		cin >> cnt;
		for (int j = 0; j < cnt; j++) {
			switch (i)
			{
			case 0: oper.push_back(1);
				break;
			case 1: oper.push_back(2);
				break;
			case 2: oper.push_back(3);
				break;
			case 3: oper.push_back(4);
				break;
			}
		}
	}
	do {
		ll res = v[0];
		for (int i = 0; i < oper.size(); i++) {
			switch (oper[i])
			{
			case 1: res += v[i + 1];
				break;
			case 2: res -= v[i + 1];
				break;
			case 3: res *= v[i + 1];
				break;
			case 4: res /= v[i + 1];
				break;
			}
		}
		MIN = min(MIN, res);
		MAX = max(MAX, res);
	} while (next_permutation(oper.begin(), oper.end()));
	cout << MAX << '\n';
	cout << MIN << '\n';
}