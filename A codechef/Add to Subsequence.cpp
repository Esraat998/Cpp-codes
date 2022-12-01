#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		vector <ll> v(n);
		map <ll, ll> mp;
		for(ll i = 0; i < n; i++) cin >> v[i];
		for(ll i = 0; i < n; i++) mp[v[i]]++;
		ll cnt = 0;
		ll mx = INT_MIN;
		for(auto it : mp){
//			mn = min(mn, it.second);
			if(it.second > 1) cnt += it.second - 1;

		}
		cout << cnt << endl;
	}
	return 0;
}


