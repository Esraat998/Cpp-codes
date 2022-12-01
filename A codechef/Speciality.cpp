#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll t; cin >> t;
	while(t--){
		ll a, b, c; cin >> a >> b >> c;
		if(a > b && a > c) cout << "Setter" << endl;
		else if(b > a && b > c) cout << "Tester" << endl;
		else cout << "Editorialist" << endl;
	}
	return 0;
}
