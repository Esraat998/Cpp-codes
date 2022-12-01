#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll t; cin >> t;
	while(t--){
		ll n, k; cin >> n >> k;
		vector <ll> v(n);
		for(ll i = 0; i < n; i++) cin >> v[i];
		if(k == 1){
			ll s = *max_element(v.begin(), v.end());
			cout << s << endl;
		}
		else{
			for(ll i = 0; i < n - k; i++){
				if(v[i] < v[i + k]) swap(v[i], v[i + k]);
			}
			ll sum = 0;
			for(ll i = 0; i < k; i++) sum += v[i];
			cout << sum << endl;
		}
	}
	return 0;
}
