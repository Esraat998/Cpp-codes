#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll t; cin >> t;
	while(t--){
		ll a, b; cin >> a >> b;
		if(a == b) cout << 0 << endl;
		else if(a - b > b) cout << b << endl;
		else cout << a - b << endl;
	}
	return 0;
}

