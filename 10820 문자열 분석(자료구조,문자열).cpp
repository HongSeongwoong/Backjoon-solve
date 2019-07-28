#include<iostream>
#include<string.h>
#include<string>
using namespace std;

int main()
{
	string str;
	int cnt_low, cnt_up, cnt_num, cnt_sp;
	while (getline(cin, str, '\n'))
	{
		cnt_low = 0, cnt_up = 0, cnt_num = 0, cnt_sp = 0;
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] >= 65 && str[i] <= 90)
				cnt_up++;
			else if (str[i] >= 97 && str[i] <= 122)
				cnt_low++;
			else if (str[i] == ' ')
				cnt_sp++;
			else
				cnt_num++;
		}
		cout << cnt_low << " " << cnt_up << " " << cnt_num << " " << cnt_sp << endl;
	}
	return 0;
}