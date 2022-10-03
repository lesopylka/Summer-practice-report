#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const double PI= 3.1415926535;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0);

	int x1, y1, x2, y2, x3, y3, x4, y4;

	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

	if (x1 > x2) swap(x1, x2);
	if (y1 > y2) swap(y1, y2);
	if (x3 > x4) swap(x3, x4);
	if (y3 > y4) swap(y3, y4);

	int xr = 0, yr = 0;

	if (x1 <= x3 && x3 <= x2) xr = x2 - x3;
	if (x1 <= x4 && x4 <= x2) xr = x4 - x1;
	if (x3 <= x1 && x2 <= x4) xr = x2 - x1;
	if (x1 <= x3 && x4 <= x2) xr = x4 - x3;

	if (y1 <= y3 && y3 <= y2) yr = y2 - y3;
	if (y1 <= y4 && y4 <= y2) yr = y4 - y1;
	if (y3 <= y1 && y2 <= y4) yr = y2 - y1;
	if (y1 <= y3 && y4 <= y2) yr = y4 - y3;

	cout << xr * yr;
}