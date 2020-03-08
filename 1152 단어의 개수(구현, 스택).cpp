#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string s;
	getline(cin,s);
	stack<char> st;
	int res=0;
	for (int i = 0; i < s.length(); i++) {
		if (isalpha(s[i])) {
			st.push(s[i]);

		}
		else if (s[i] == ' '&&st.size()) {
			while (st.size()) {
				st.pop();
			}
			res++;
		}
	}
	if (st.size()) {
		res++;
	}
	cout << res << '\n';
}