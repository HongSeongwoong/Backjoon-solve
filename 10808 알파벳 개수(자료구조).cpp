#include<iostream>
#include<string.h>
#include<string>
using namespace std;

int cnt[26];

int main()
{
	string s;
	cin >> s;
	int cnt_str = s.size();
	for (int i = 0; i < cnt_str; i++)
	{
		int asc = s[i];
		cnt[asc - 97]++;
	}
	for (int j = 0; j < 26; j++)
	{
		cout << cnt[j] << " ";
	}
	cout << endl;
	return 0;
}