#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, mx = 0;
		cin >> n;
		map <int, int> mp;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			mp[x]++;
		}
		for(auto x : mp){
			if(x.second > mx) mx = x.second;
		}
		int sz = mp.size() - 1;
		if(mx > sz){
			mx--;
			sz++;
		}
		cout << min(sz, mx) << endl;
	}
	return 0;
}
