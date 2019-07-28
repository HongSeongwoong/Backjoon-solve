#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;
vector<string> lv;
vector<string> sv;
vector<string> v;

void Binary_search(string target)
{
	int l = 0;
	int r = sv.size() - 1;
	int mid;
	while (l <= r)
	{
		mid = (l + r) / 2;
		if (sv[mid] == target)
		{
			v.push_back(target);
			break;
		}
		else if (sv[mid] > target)
			r = mid - 1;
		else
			l = mid + 1;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		lv.push_back(s);
	}
	sort(lv.begin(), lv.end());
	for (int j = 0; j < m; j++)
	{
		string s;
		cin >> s;
		sv.push_back(s);
	}
	sort(sv.begin(), sv.end());
	int mid = lv.size() / 2;
	for (int i = 0; i < n; i++)
	{
		Binary_search(lv[i]);
	}
	cout << v.size() << '\n';
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << '\n';
}
