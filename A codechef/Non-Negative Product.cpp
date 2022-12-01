#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll t; cin >> t;
	while(t--){
		ll n; cin >> n;
		ll neg = 0, zero = 0;
		for(ll i = 0; i < n; i++){
			ll x; cin >> x;
			if(x < 0) neg++;
			else if(x == 0) zero++;
		}
		if(zero > 0) cout << 0 << endl;
		else{
			if(neg % 2 == 0) cout << 0 << endl;
			else cout << 1 << endl;
		}
	}
	return 0;
}
