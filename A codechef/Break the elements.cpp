#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		vector <ll> v(n);
		for(ll i = 0; i < n; i++) cin >> v[i];
		ll od = 0, ev = 0, cnt = 0;
		for(ll i = 0; i < n; i++){
//			if(v[i] % 2 == 0) ev++;
//			else if(v[i] == 1) cnt++;
			if(v[i] % 2 == 1) od++;
		}
		if(od == n || od == 0) cout << 0 << endl;
		else{
			ev = n - od;
			cout << ev << endl;
		}
	}
	return 0;
}

