#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll t; cin >> t;
	while(t--){
		ll n; cin >> n;
		vector <ll> v, v1, v2;
		ll j = 1;
		for(ll i = 0; i < n; i++){
			v.push_back(j); j++;
		}
		if(n == 1) cout << v[0] << endl;
		else{
			cout << v[n - 1];
			for(int i = 0; i < n - 1; i++) cout << " " << v[i];
			cout << endl;
		}

	}
	return 0;
}


