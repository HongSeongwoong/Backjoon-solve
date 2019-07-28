#include<iostream>
#include<string>
using namespace std;

int main()
{
	int stack[10001];
	int n;
	cin >> n;
	string cmd;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> cmd;
		if (cmd == "push")
		{
			int num;
			cin >> num;
			stack[cnt] = num;
			cnt++;

		}
		else if (cmd == "pop")
		{
			if (cnt == 0)
			{
				cout << -1 << endl;
			}
			else
			{
				cout << stack[cnt - 1] << endl;
				cnt--;
			}
		}
		else if (cmd == "size")
		{
			cout << cnt << endl;
		}
		else if (cmd == "empty")
		{
			if (cnt == 0)
			{
				cout << 1 << endl;
			}
			else
				cout << 0 << endl;
		}
		else if (cmd == "top")
		{
			if (cnt == 0)
			{
				cout << -1 << endl;
			}
			else
				cout << stack[cnt - 1] << endl;
		}
	}
	return 0;
}