#include <bits/stdc++.h>
#define ll long long
using namespace std;


bool isprime(ll n){
	for(ll i = 2; i * i <= n; i++){
		if(n % i == 0){
			return false;
		}
		return true;
	}
}

int main(){
	ll n;
	ll t;
	cin >> t;
	while(t--){
		cin >> n;
		if(n == 1) cout << "YES" << endl;
		else{
			if(isprime(n + 1)) cout << "NO" << endl;
			else cout << "YES" << endl;
		}
	}
	return 0;
}
