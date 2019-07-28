#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int gcd(int num1, int num2) {
	int tmp;
	if (num1 < num2) {
		tmp = num1;
		num1 = num2;
		num2 = tmp;
	}
	while (num2 != 0) {
		tmp = num1 % num2;
		num1 = num2;
		num2 = tmp;
	}
	return num1;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	string s;
	cin >> s;
	int n=s.find(":");
	string a = s.substr(0, 0 + n);
	int num1 = stoi(a);
	string b = s.substr(n + 1, n + 1 + s.length() - 1 - n);
	int num2 = stoi(b);
	int mul = gcd(num1, num2);
	num1 /= mul;
	num2 /= mul;
	cout << num1 << ":" << num2;
}