#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

bool prime[1010];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, k;
	cin >> n >> k;
	int cnt = 0;
	for (int i = 2; i <= n; i++)
	{
		prime[i] = true;
		cnt++;
		if (cnt >= k)
		{
			cout << i;
			break;
		}
		for (int j = i * i; j <= n; j += i)
		{
			prime[j] = true;
			cnt++;
			if (cnt == k)
			{
				cout << j;
				break;
			}
		}
	}
}