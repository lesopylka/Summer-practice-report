#include <iostream>
#include <cmath>
#include <string>
#include <tuple>
#include <set>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

const int mod = 1000000007;
//const int N = 10000000;

int bpow(long long a, long long n, int m)
{
	int res = 1;
	while (n)
	{
		if (n & 1)
			res = (res * a) % m;
		a = (a * a) % m;
		n >>= 1;
	}
	return res;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		long long a, n;
		cin >> a >> n;
		cout << bpow(a, n, mod) << '\n';
	}
}


 