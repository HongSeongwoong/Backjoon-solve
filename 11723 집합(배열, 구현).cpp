#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;

int n;
int chk[21];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	memset(chk, -1, sizeof(chk));
	cin >> n;
	while (n--) {
		string s; int num;
		cin >> s;
		if (s == "all") {
			for (int i = 1; i < 21;i++) {
				chk[i] = 1;
			}
		}
		else if (s == "empty") {
			memset(chk, -1, sizeof(chk));
		}
		else {
			cin >> num;
			if (s == "add") {
				if (chk[num] == 1) continue;
				chk[num] *= -1;
			}
			else if (s == "remove") {
				if (chk[num] == -1) continue;
				chk[num] *= -1;
			}
			else if (s == "check") {
				if (chk[num] == 1) cout << 1 << '\n';
				else if(chk[num]==-1) cout << 0 << '\n';
			}
			else if (s == "toggle") chk[num] *= -1;
		}
	}
}