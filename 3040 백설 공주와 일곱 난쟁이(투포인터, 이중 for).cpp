#include<iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int arr[9];
	int sum=0;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	int s = 0,e = 1;
	while (1) {
		int tmp = sum - (arr[s] + arr[e]);
		if (tmp == 100) {
			break;
		}
		e++;
		if (e == 9) {
			s++; e = s + 1;
		}
	}
	for (int i = 0; i < 9; i++) {
		if (i == s || i == e) continue;
		cout << arr[i] << '\n';
	}
}