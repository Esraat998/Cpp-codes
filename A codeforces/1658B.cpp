#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll mod = 998244353;

int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		ll m = 0;
		if(n % 2 == 1) cout << 0 << endl;
		else{
			ll ans = 1;
			for(int i = 1; i <= n / 2; i++){
				ans *= i * i %  mod;
				ans %= mod;
			}
			cout << ans << endl;
		}
	}
	return 0;
}
