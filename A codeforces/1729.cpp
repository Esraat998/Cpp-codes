#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	ll a, b, c; cin >> a >> b >> c;
	ll x1 = 0, x2 = 0, ti = 0;
	x1 = abs(b - c);
	x2 = x1 + abs(c - 1);
	if(abs(a - 1) == x2) cout << 3 << endl;
	else if(abs(a - 1) < x2) cout << 1 << endl;
	else cout << 2 << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
