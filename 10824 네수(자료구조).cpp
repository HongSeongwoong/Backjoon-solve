#include<iostream>
#include<string.h>
#include<string>
using namespace std;

int main()
{
	string s1, s2, s3, s4;
	int ans;
	cin >> s1 >> s2 >> s3 >> s4;
	string s12, s34;
	s12 = s1 + s2;
	s34 = s3 + s4;
	cout << stoll(s12) + stoll(s34) << endl;
	return 0;
}