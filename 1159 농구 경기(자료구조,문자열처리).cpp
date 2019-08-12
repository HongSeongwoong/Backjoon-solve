#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int arr[26];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		arr[s[0] - 'a']++;
	}
	bool check = false;
	for (int i = 0; i < 26; i++) {
		if (arr[i]>=5) {
			cout << char(i + 'a');
			check=true;
		}
	}
	if (!check) {
		cout << "PREDAJA";
	}
}