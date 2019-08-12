#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<pair<int, int>> v;
typedef long long ll;
ll cnt;
bool flag;
void box(int l, int w, int h) {
	if (!flag) {
		return;
	}
	if (l == 0 || w == 0 || h == 0) {
		return;
	}
	for (auto &e : v) {
		int tmp = 1 << e.first;
		if (e.second > 0 && l >= tmp && w >= tmp && h >= tmp) {
			cnt++;
			e.second--;
			box(l, w, h - tmp);
			box(tmp, w - tmp, tmp);
			box(l - tmp, w, tmp);
			return;
		}
	}
	flag = false;
}
int sol(int l, int w, int h) {
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	flag = true;
	box(l, w, h);
	return flag ? cnt : -1;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int l, w, h, n;
	cin >> l >> w >> h>>n;
	while (n--) {
		int a, b;
		cin >> a >> b;
		v.push_back({ a,b });
	}
	cout<<sol(l, w, h);
}