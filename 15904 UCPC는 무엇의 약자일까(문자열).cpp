#include<iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	string s;
	getline(cin,s);
	string UCPC = "UCPC";
	int idx = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i]==UCPC[idx]) {
			idx++;
		}
	}
	if (idx == 4)
		cout << "I love UCPC";
	else
		cout << "I hate UCPC";
}