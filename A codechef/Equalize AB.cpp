#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll t; cin >> t;
	while(t--){
		ll a, b, x; cin >> a >> b >> x;
		if(abs(a - b) % (2 * x) == 0) cout << "YES" << endl;
		else cout << "NO" << endl;

	}
	return 0;
}

