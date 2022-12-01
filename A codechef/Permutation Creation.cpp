#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll t; cin >> t;
	while(t--){
		ll n; cin >> n;
		if(n <= 2) cout << -1 << endl;
		else{
			vector <ll> v, vv;
			for(ll i = 1; i <= n; i++){
				if(i % 2 == 0) v.push_back(i);
				else vv.push_back(i);
			}
			for(ll i = 1; i < v.size() - 1; i++) swap(v[i], v[i + 1]);
			for(ll i = 0; i < vv.size() - 2; i++) swap(vv[i], vv[i + 1]);
			for(ll i = 0; i < v.size(); i++) cout << v[i] << " ";
			for(ll i = 0; i < vv.size(); i++) cout << vv[i] << " ";
			cout << endl;
		}
	}
	return 0;
}

