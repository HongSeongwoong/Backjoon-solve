#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

bool flag[100001];
int arr[100001];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	int num;
	for (int i = 2; i*i <= 100000; i++) {
		if (flag[i])
			continue;
		for (int j = i * i; j <= 100000; j += i) {
			flag[j] = true;
		}
	}
	while (t--) {
		memset(arr, 0, sizeof(arr));
		cin >> num;
		for (int i = 2; i <= 100000; i++) {
			if (!flag[i] && num%i == 0) {
				while (1) {
					num /= i;
					arr[i]++;
					if (num%i != 0)
						break;
				}
			}
			if (num == 0)
				break;
		}
		for (int i = 2; i <= 100000; i++) {
			if (arr[i]) {
				cout << i << ' ' << arr[i] << '\n';
			}
		}
	}

}
