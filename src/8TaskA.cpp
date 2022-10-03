#include <bits/stdc++.h>
using namespace std;
using ll = long long;



int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	ll n;
	cin >> n;
	vector<ll> vi(n);
	cin >> vi[0];
	for (ll i = 1; i < n; ++i)
	{
		cin >> vi[i];
		vi[i] += vi[i - 1];
	}

	ll q, l, r;
	cin >> q;
	for (int i = 0; i < q; ++i)
	{
		cin >> l >> r;
		--l;
		--r;
		if (l == 0)
			cout << vi[r] << '\n';
		else
			cout << vi[r] - vi[l - 1] << '\n';

	}

}