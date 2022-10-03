#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	ll n;
	cin >> n;
	ll tmp = 0, res = 1;

	for (ll i = 2; i * i <= n && n != 1; ++i)
	{
		if (n % i != 0) continue;
		tmp = 0;
		while (n % i == 0)
		{
			n /= i;
			++tmp;
		}
		++tmp;
		res *= tmp;
	}
	if (n != 1) res *= 2;
	cout << res;
}