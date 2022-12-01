#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll t; cin >> t;
	while(t--){
		ll a, b; cin >> a >> b;
		if(a % 2 == 1 && b % 2 == 1) cout << "NO" << endl;
		else if(a == 1 || b == 1) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}


