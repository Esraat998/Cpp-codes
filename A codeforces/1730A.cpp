#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, c; cin >> n >> c;
		map <int, int> mp;
		vector <int> v, vv;
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			v.push_back(x);
			mp[x]++;
		}
		if(c == 1) cout << mp.size() << endl;
		else if(n <= c) cout << n << endl;
		else{
			int sum = 0;
			for(auto it : mp){
				if(it.second >= c) sum += c;
				else sum += it.second;
			}
//			for(int i = 0; i < mp.size(); i++){
//				if(mp[v[i]] >= c) sum += c;
//				else sum += mp[v[i]];
//			}
			cout << sum  << endl;
		}
	}
	return 0;
}
