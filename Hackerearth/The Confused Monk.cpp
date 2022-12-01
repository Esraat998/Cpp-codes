#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll m = 1e9 + 7;

int main(){
	int n; cin >> n;
	vector <ll> v(n);
	for(int i = 0; i < n; i++) cin >> v[i];
	ll product = v[0];
	ll gcd = v[0];
	for(int i = 1; i < n; i++){
		product *= v[i];
		product %= m;
		gcd = __gcd(gcd, v[i]);
	}
//	cout << product << " " << gcd << endl;
	cout << pow(product, gcd) << endl;
	return 0;
}

