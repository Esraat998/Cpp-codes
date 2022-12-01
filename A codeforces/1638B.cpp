#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int mxodd = INT_MIN, mxeven = INT_MIN;
		vector <int> v;
		int n;
		cin >> n;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			v.push_back(x);
		}
		bool check = false;
		for(int i = 0; i < n; i++){
			if(v[i] % 2 == 0 && v[i] >= mxeven){
				mxeven = v[i];
				continue;
			}
			else if(v[i] % 2 != 0 && v[i] >= mxodd){
				mxodd = v[i];
				continue;
			}
			else check = true;
		}
		if(check) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}
