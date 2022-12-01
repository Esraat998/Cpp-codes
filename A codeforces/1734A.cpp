#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll t; cin >> t;
	while(t--){
		ll n; cin >> n;
		vector <ll> v(n);
		map <ll, ll> mp;
		for(ll i = 0; i < n; i++) cin >> v[i];
		for(ll i = 0; i < n; i++) mp[v[i]]++;
		sort(v.begin(), v.end());
		ll mn = INT_MIN;
		for(int i = 0; i < n - 3; i++){
			mn = min(mn, (v[i + 2] - v[i]));
		}
		cout << mn << endl;
	}
	return 0;
}
