#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{
	string str;
	while (1)
	{

		getline(cin, str);
		int n = str.length();
		if (str == ".")
		{
			break;
		}
		bool res = true;
		stack<char> s;
		for (int i = 0; i < n; i++)
		{
			if (str[i] == '(' || str[i] == '[')
			{
				s.push(str[i]);
			}
			else if (str[i] == ')')
			{
				if (s.empty())
				{
					res = false;
					break;
				}
				if (s.top() == '(')
				{
					s.pop();
				}
				else
				{
					res = false;
					break;
				}
			}

			else if (str[i] == ']')
			{
				if (s.empty())
				{
					res = false;
					break;
				}
				if (s.top() == '[')
				{
					s.pop();
				}
				else
				{
					res = false;
					break;
				}
			}

		}

		if (res && s.empty())
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

	return 0;
}