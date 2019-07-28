#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
bool flag[246913] = { false,true, };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	for (int i = 2; i*i <= 246912; i++)
	{
		if (flag[i] == false)
		{
			for (int j = i * i; j <= 246913; j += i)
			{
				flag[j] = true;
			}
		}
	}
	int n;
	while (cin >> n)
	{
		if (n == 0)
			break;
		int cnt = 0;
		for (int i = n + 1; i <= 2 * n; i++)
		{
			if (!flag[i])
				cnt++;
		}
		cout << cnt << '\n';
	}
}