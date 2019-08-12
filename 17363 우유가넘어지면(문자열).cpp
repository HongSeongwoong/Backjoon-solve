#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
char arr[101][101];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n>> m;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < m; j++) {
			arr[i][j] = s[j];
		}
	}
	for (int j = m-1; j >= 0; j--) {
		for (int i = 0; i < n; i++) {
			if (arr[i][j] == '.')
				cout << arr[i][j];
			if (arr[i][j] == 'O')
				cout << arr[i][j];
			if (arr[i][j] == '-')
				cout << '|';
			if (arr[i][j] == '|')
				cout << '-';
			if (arr[i][j] == '/')
				cout << '\\';
			if (arr[i][j] == '\\')
				cout << '/';
			if (arr[i][j] == '^')
				cout << '<';
			if (arr[i][j] == '<')
				cout << 'v';
			if (arr[i][j] == 'v')
				cout << '>';
			if (arr[i][j] == '>')
				cout << '^';
		}
		cout << '\n';
	}
}