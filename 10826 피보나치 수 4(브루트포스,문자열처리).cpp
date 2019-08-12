#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string arr[10101];

void fibo(int idx) {
	arr[0] = "0";
	arr[1] = "1";
	for (int i = 2; i <= idx; i++) {
		string s1 = arr[i - 2];
		string s2 = arr[i - 1];
		int len1 = s1.length();
		int len2 = s2.length();
		bool flag = false;
		if (len1 < len2) {
			s1.insert(0, "0");
			len1++;
		}
		for (int j = 0; j < len2; j++) {
			int tmp = (s1[len1 - 1 - j] - '0') + (s2[len2 - 1 - j]-'0');
			if (flag) {
				tmp++;
				flag = false;
			}
			if (tmp >= 10) {
				flag = true;
			}
			arr[i] += to_string(tmp % 10);
		}
		if (flag) {
			arr[i] += "1";
		}
		reverse(arr[i].begin(), arr[i].end());
	}
	cout << arr[idx];
}
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	fibo(n);
}