#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int dp[1001][1001];
string str1 = "0";
string str2 = "0";

void lcs() {
	int len1 = str1.length(), len2 = str2.length();
	for (int i = 0; i < len1; i++) {
		for (int j = 0; j < len2; j++) {
			if (i == 0 || j == 0) {
				dp[i][j] = 0;
				continue;
			}
			if (str1[i] == str2[j]) {
				dp[i][j] = dp[i-1][j - 1] + 1;
			}
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}
	cout << dp[len1 - 1][len2 - 1];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	string tmp1;
	string tmp2;
	
	cin >> tmp1 >> tmp2;
	str1 += tmp1;
	str2 += tmp2;

	lcs();
}