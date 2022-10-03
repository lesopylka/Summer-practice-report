#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
 
	int n,k,c;
	cin >> k >> n >> c;
	cout << k * (n - c);
	return 0;
}