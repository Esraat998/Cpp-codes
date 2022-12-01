#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll t; cin >> t;
	while(t--){
		ll n; cin >> n;
		vector <ll> v;
		ll x = 1;
		for(ll i = 0; i < n; i++){
			v.push_back(x); x++;
		}
//		unsigned a = 0;
//		shuffle(v.begin(), v.end(), default_random_engine(a));
		random_shuffle(v.begin(), v.end());
		for(ll i = 0; i < n; i++) cout << v[i] << " ";
		cout << endl;
	}
	return 0;
}
