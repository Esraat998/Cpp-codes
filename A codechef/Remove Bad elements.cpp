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
		ll mn = INT_MAX;
		ll mx = INT_MIN;
		for(auto it : mp){
			mn = min(mn, it.second);
			mx = max(mx, it.second);
		}
//		cout << mn << " " << mx << endl;
		if(mx == n) cout << 0 << endl;
		else cout << n - mx << endl;
	}
	return 0;
}

