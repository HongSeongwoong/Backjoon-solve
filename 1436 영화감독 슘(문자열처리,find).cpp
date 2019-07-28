#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int cnt;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	for (int i = 666; i < 987654321; i++) {
		string str = to_string(i);
		if (str.find("666") != -1)
			cnt++;
		if (cnt == n) {
			cout << i;
			break;
		}
	}
}
