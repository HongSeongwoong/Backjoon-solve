#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	string s;
	cin >> s;
	stack<char> st;
	int result = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(')
		{
			st.push(s[i]);
		}
		else if (s[i] == ')')
		{
			st.pop();
			if (s[i - 1] == '(')
				result += st.size();
			if (s[i - 1] == ')')
				result++;
		}
	}
	cout << result << '\n';
	return 0;
}