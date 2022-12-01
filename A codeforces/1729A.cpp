#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin >> t;

	while(t--){
		ll a, b, c;
		cin >> a >> b >> c;

		if(a == 1) cout << 1 << endl;

		else if(b < c){
			ll t = c - b;
			if(b != 1) b--;
//			cout << b << " " << t << endl;
			if(b + t == a - 1) cout << 3 << endl;
			else if(b + t > a - 1) cout << 1 << endl;
			else cout << 2 << endl;
		}
		else if(b > c){
			b--;
			if(b == a - 1) cout << 3 << endl;
			else if(b > a - 1) cout << 1 << endl;
			else cout << 2 << endl;
		}
	}
	return 0;
}
