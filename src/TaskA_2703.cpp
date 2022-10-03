#include <iostream>
#include <vector>

using namespace std;

int main(){
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<int> a(n, 0);
	int k = 0;
	for (int i = 0; i < n; ++i){
		cin >> a[i];
		if (k < a[i]) k = a[i];
	}
	k++;
	int ans = 0;
	vector<int> count(k, 0);
	for (int i = 0; i < n; ++i){
		++count[a[i]];
	}
	for (int i = 1; i < k; ++i){
		count[i] += count[i-1];
	}
	vector<int> res(n);
	for (int i = n-1; i >= 0; --i){
		res[--count[a[i]]] = a[i];
	}
	/*for (int i = 0; i < n; ++i){
		cout << res[i] << ' ';
	}*/
	for (int i = (n-1)/2+1; i < n; ++i){
		ans += res[i];
	}
	cout << ans << endl;
	return 0;
}
