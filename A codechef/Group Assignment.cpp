#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		vector <int> v(n);
		for(auto &x : v) cin >> x;
		map <int, int> mp;
		for(int i = 0; i < n; i++){
			mp[v[i]]++;
		}
		int m = 0;
		for(auto it : mp){
			if(it.second % it.first != 0){
				m = 1; break;
			}
		}
		if(m == 1) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}

