#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll t; cin >> t;
	while(t--){
		ll n; cin >> n;
		vector <ll> v(n);
		for(int i = 0; i < n; i++) cin >> v[i];
		ll cnt = 0;
		for(int i = 0; i < n - 1; i++){
			if(v[i] > v[i + 1]) cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}
