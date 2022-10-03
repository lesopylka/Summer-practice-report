#include<bits/stdc++.h>

using namespace std;

int main(){
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int n,k;
	cin >> n >> k;
	vector<int> v1[100010], v2[100010];	
	for(int i = 1; i <= n; ++i){
		int x, y;
		cin >> x >> y;
		v1[y].push_back(x);
		v2[y].push_back(i);
	}
	bool check = true;
	for(int i = 1; i <= k; ++i){
		if (v1[i].size()){
			sort(v1[i].begin(), v1[i].end());
			for (int j = 0; j < v1[i].size(); ++j){
				if(v1[i][j] != v2[i][j]){
					check = false;
					break;
				}
			}
		}
		if (!check) break;
	}
	if (check) cout << "Y\n";
	else cout << "N\n";
	return 0;
}