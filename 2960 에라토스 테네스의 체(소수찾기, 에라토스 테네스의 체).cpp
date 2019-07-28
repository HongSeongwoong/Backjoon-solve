#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;
vector<string> lv;
vector<string> sv;
vector<string> v;
bool prime[1010];
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
	for (int j = 0; j < m; j++)
	{
		string s;
		cin >> s;
		sv.push_back(s);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (lv[i] == sv[j])
			{
				v.push_back(lv[i]);
			}
		}
	}
	cout << v.size()<<'\n';
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
		cout << v[i]<<'\n';
}
