#include <iostream>

using namespace std;

int main(){
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	int k, a, w;
	cin >> k;
	bool check = true;
	cin >> a >> w;
	int d = w / a;
	if((w % a != 0) || (w / a != d)){
		check = false;
	}
	for (int i = 1; i < k; ++i){
		cin >> a >> w;
		//cout << d << '\n';
		if((w % a != 0) || (w / a != d)){
			check = false;
		}
	}
	if(check){
		cout << "QUALITY";
	} else {
		cout << "DEFECT";	
	}
	return 0;
}
