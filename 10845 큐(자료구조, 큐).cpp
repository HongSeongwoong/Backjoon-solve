#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main()
{
	queue<int> q;
	int n;
	cin >> n;
	string cmd;
	for (int i = 0; i < n; i++)
	{
		cin >> cmd;
		if (cmd == "push")
		{
			int num;
			cin >> num;
			q.push(num);

		}
		else if (cmd == "pop")
		{
			if (q.size() == 0)
			{
				cout << -1 << endl;
			}
			else
			{
				cout << q.front() << endl;
				q.pop();
			}
		}
		else if (cmd == "size")
		{
			cout << q.size() << endl;
		}
		else if (cmd == "empty")
		{
			if (q.size() == 0)
			{
				cout << 1 << endl;
			}
			else
				cout << 0 << endl;
		}
		else if (cmd == "front")
		{
			if (q.size() == 0)
				cout << -1 << endl;
			else
				cout << q.front() << endl;
		}
		else if (cmd == "back")
		{
			if (q.size() == 0)
				cout << -1 << endl;
			else
				cout << q.back() << endl;
		}
	}
	return 0;
}