#include<iostream>
#include<algorithm>
#include<string.h>
#include<cstdio>
using namespace std;
char arr[5][15];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	for (int i = 0; i < 5; i++)
		scanf("%s", arr[i]);
	for (int j = 0; j < 15; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			if (arr[i][j] == NULL)
				continue;
			cout << arr[i][j];
		}
	}
}