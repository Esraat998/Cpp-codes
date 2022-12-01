#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll x, y;
		cin >> x >> y;
		if(y % x != 0) cout << 0 << " " << 0 << endl;
		else{
			ll ans = y / x;
			cout << 1 << " " << ans << endl;
		}
	}
	return 0;
}
