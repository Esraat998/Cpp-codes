#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll t; cin >> t;
	while(t--){
		ll a, b; cin >> a >> b;
		if(a % b == 0) cout << a / b << endl;
		else cout << (a/ b) + a - (b * (a / b)) << endl;
	}
	return 0;
}

