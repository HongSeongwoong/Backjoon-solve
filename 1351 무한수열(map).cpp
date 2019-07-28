#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

typedef long long ll;
map<ll, ll> dp;
ll sol(ll n, ll &p, ll &q) {
	if (n == 0) {
		return 1;
	}
	else if (dp[n])
		return dp[n];
	return dp[n]=sol(n/p,p,q) + sol(n / q,p,q);
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll n, p, q;
	cin >> n >> p >> q;
	cout << sol(n,p,q);
}
