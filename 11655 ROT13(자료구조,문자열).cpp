#include<iostream>
#include<string.h>
#include<string>
using namespace std;

int main()
{
	string str;
	string str_;
	getline(cin, str, '\n');
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] >= 65 && str[i] <= 77)
		{
			str[i] += 13;
		}
		else if (str[i] >= 78 && str[i] <= 90)
		{
			str[i] -= 13;
		}
		else if (str[i] >= 97 && str[i] <= 109)
		{
			str[i] += 13;
		}
		else if (str[i] >= 110 && str[i] <= 122)
		{
			str[i] -= 13;
		}
		else
		{
		}
	}
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i];
	}
	return 0;
}