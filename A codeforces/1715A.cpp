#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll t; cin >> t;
	while(t--){
		ll n, m, sum = 0; cin >> n >> m;
		if(n == 1 && m == 1) cout << 0 << endl;
		else{
			cout << min(n, m) + (n + m) - 2 << endl;
		}
	}
	return 0;
}



