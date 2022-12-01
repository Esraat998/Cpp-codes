#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n, ev = 0, od = 0;
		cin >> n;
		if(n % 2 == 0) ev = 1;
		else od = 1;
		ll ans = (n + 1) / 2;
		if(od) cout << -ans << endl;
		if(ev) cout << ans << endl;
	}
	return 0;
}

