#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll t; cin >> t;
	while(t--){
		ll n; cin >> n;
		vector <ll> v(n * 2), vv, vx, vy;

		for(int i = 0; i < n * 2; i++) cin >> v[i];
		sort(v.begin(), v.end());

		for(int i = 0; i < n; i++) cout << v[i] << " " << v[i + n] << " ";
		cout << endl;
	}
	return 0;
}

