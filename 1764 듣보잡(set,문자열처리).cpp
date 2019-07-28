#include<iostream>
#include<algorithm>
#include<string>
#include<set>

using namespace std;

set<string> str;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		str.insert(s);
	}
	set<string> ans;
	set<string>::iterator iter;
	for (int i = 0; i < m; i++)
	{
		string s;
		cin >> s;
		iter = str.find(s);
		if (iter != str.end())
			ans.insert(s);
	}
	cout << ans.size() << '\n';
	for (iter = ans.begin(); iter != ans.end(); iter++)
	{
		cout << *iter << '\n';
	}
	
}
