#include<iostream>
#include<string>

using namespace std;

int main()
{
	int cnt_L = 0;
	int cnt_R = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		cnt_L = 0, cnt_R = 0;
		for (int j = 0; j < s.size(); j++)
		{
			if (s[j] == '(')
			{
				cnt_L++;
			}
			else if (s[j] == ')')
			{
				cnt_R++;
			}
			if (cnt_R > cnt_L)
				break;
		}
		if (cnt_L == cnt_R)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}