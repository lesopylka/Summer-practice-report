#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
 
	string row;
	int x = -1;
	int y = -1;
	for (int i = 0; i < 7; ++i){
		cin >> row;
		for (int j = 0; j < 27; ++j){
			if ((row[j] == '#') && (row[(j + 1) % 27] == '#') && (row[(j + 2) % 27] == '#') && (row[(j + 3) % 27] == '#') \
			&& (row[(j + 19) % 27] == '#') && (row[(j + 20) % 27] == '#') && (row[(j + 22) % 27] == '#') && (row[(j + 23) % 27] == '#')){
				x = i;
				y = j;
				break;
			}
		}
	}
	
	cout << x << ' ' << y;
	return 0;
}