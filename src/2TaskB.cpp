#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
	ios::sync_with_stdio(0); cin.tie(0);

	
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	int l, r;
	while (cin >> l >> r && l != 0 && r != 0)
	{
		--l; --r;
		int end = l + (r - l + 1) / 2 + (r - l + 1) % 2 - 1;
		for (int i = l; i <= end; ++i)
		{
			swap(arr[i], arr[r - (i - l)]);
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << ' ';
	}
}