#include<iostream>
#include<string>
#include<deque>

using namespace std;

int main()
{
	deque<int> dq;
	int n;
	cin >> n;
	string s;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		if (s == "push_back")
		{
			int num;
			cin >> num;
			dq.push_back(num);
		}
		else if (s == "push_front")
		{
			int num;
			cin >> num;
			dq.push_front(num);
		}
		else if (s == "pop_front")
		{
			if (dq.size() == 0)
				cout << -1 << endl;
			else
			{
				cout << dq.front() << endl;
				dq.pop_front();
			}
		}
		else if (s == "pop_back")
		{
			if (dq.size() == 0)
				cout << -1 << endl;
			else
			{
				cout << dq.back() << endl;
				dq.pop_back();
			}
		}
		else if (s == "size")
		{
			cout << dq.size() << endl;
		}
		else if (s == "empty")
		{
			cout << dq.empty() << endl;
		}
		else if (s == "front")
		{
			if (dq.size() == 0)
				cout << -1 << endl;
			else
				cout << dq.front() << endl;
		}
		else if (s == "back")
		{
			if (dq.size() == 0)
				cout << -1 << endl;
			else
				cout << dq.back() << endl;
		}
	}
	return 0;
}