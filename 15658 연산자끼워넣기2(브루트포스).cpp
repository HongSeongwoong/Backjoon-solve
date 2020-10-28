#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;

int n, m;
vector<int> v;
vector<int> oper;
vector<int> res;
vector<bool> chk;
ll MIN = 1000000000;
ll MAX = -1000000000;

void go(int plus, int minus, int multiply, int divide, int len, ll sum,int index) {
	if (len == n-1) {
		MAX = max(sum, MAX);
		MIN = min(sum, MIN);
		return;
	}
	if (plus > 0) go(plus - 1, minus, multiply, divide, len + 1, sum + v[index],index+1);
	if (minus > 0) go(plus , minus-1, multiply, divide, len + 1, sum - v[index], index + 1);
	if (multiply > 0) go(plus , minus, multiply-1, divide, len + 1, sum * v[index], index + 1);
	if (divide > 0) go(plus , minus, multiply, divide - 1, len + 1, sum / v[index], index + 1);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n;
	v.resize(n);
	oper.resize(4);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < 4; i++) {
		cin >> oper[i];
	}
	go(oper[0], oper[1], oper[2], oper[3], 0, v[0], 1);
	cout << MAX << '\n';
	cout << MIN << '\n';
}