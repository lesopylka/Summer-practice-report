#include<iostream>

using namespace std;

int main(){
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int t,d,m;
	cin >> t >> d >> m;
	bool check = false;
	int sleep = 0;
	while(m--){
		int x;
		cin >> x;
		if (x - sleep >= t) check = true;
		sleep = x;
	}
	if (d - sleep >= t) check = true;
	if (check) cout << "Y\n";
	else cout << "N\n";
	return 0;
}