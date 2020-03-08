#include<iostream>
using namespace std;

int sol(int num,int base) {
	int res = 0;
	for (int i = num; i > 0; i /= base) {
		res += i % base;
	}
	return res;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	for (int i = 1000; i < 10000; i++) {
		int val = sol(i, 10);
		if (val == sol(i, 12) && val == sol(i , 16)) {
			cout << i << '\n';
		}
	}
}