#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll t; cin >> t;
	while(t--){
		ll n; cin >> n;
		vector <ll> v(n), vv, vx;
		for(int i = 0; i < n; i++) cin >> v[i];
		for(int i = 0; i < n; i++){
			if(v[i] % 2 == 1) vv.push_back(v[i]);
			else vx.push_back(v[i]);
		}
		for(int i = 0; i < vv.size(); i++) cout << vv[i] << " ";
		for(int i = 0; i < vx.size(); i++) cout << vx[i] << " ";
		cout << endl;
	}
	return 0;
}
