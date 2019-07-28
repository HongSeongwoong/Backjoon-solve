#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string s;
	string str[1000];
	cin >> s;
	int cnt = s.size();
	for (int i = 0; i < cnt; i++)
	{
		str[i] = s.substr(i, cnt);
	}
	sort(str, str + cnt);
	for (int j = 0; j < cnt; j++)
	{
		cout << str[j] << endl;
	}
	return 0;
}