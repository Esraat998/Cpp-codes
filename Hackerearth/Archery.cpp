#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		vector <ll> v(n);
		for(int i = 0; i < n; i++) cin >> v[i];
		ll sum = (v[0] * v[1]) / (__gcd(v[0], v[1]));
		for(int i = 2; i < n; i++){
			sum = (sum * v[i]) / (__gcd(sum, v[i]));
		}
		cout << sum << endl;
	}
	return 0;
}
