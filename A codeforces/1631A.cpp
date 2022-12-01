#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector <int> v;
		vector <int> vv;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			v.push_back(x);
		}
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			vv.push_back(x);
		}
		for(int i = 0; i < n; i++){
			if(vv[i] > v[i]) swap(vv[i], v[i]);
		}
		sort(v.begin(), v.end());
		sort(vv.begin(), vv.end());
		int ans = v[n - 1] * vv[n - 1];
		cout << ans << endl;
	}
	return 0;
}
