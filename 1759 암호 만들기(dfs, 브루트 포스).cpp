#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int l, c;
int vowel = 0, consonant = 0;
bool visited[16];
vector<char> res;
vector<char> v;
void dfs(int idx, int len) {
	if (len > l) return;
	if (len == l&&vowel>=1&&consonant>=2) {
		for (auto a : res) {
			cout << a;
		}
		cout << '\n';
	}
	for (int i = 0; i < c; i++) {
		if (idx > i || visited[i]) continue;
		visited[i] = true;
		res.push_back(v[i]);
		if (v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u') {
			vowel++;
			dfs(i, len + 1);
			vowel--;
		}
		else {
			consonant++;
			dfs(i, len + 1);
			consonant--;
		}
		res.pop_back();
		visited[i] = false;
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> l >> c;
	v.resize(c);
	for (int i = 0; i < c; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	dfs(0, 0);
}