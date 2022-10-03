#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	int m = 1000000007;
	cin >> n >> k;

	int* arr = new int[n+1];

	arr[0] = 1;
	arr[1] = 1;
	for (int i = 2; i <= n; ++i)
	{
		arr[i] = 0;
		for (int j = 1; j <= k && j <= i; ++j)
		{
			arr[i] += arr[i - j];
			arr[i] %= m;
		}
	}

	cout << arr[n];

	return 0;
}
 