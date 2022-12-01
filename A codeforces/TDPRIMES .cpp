#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll n = 1e9;
vector <bool> isPrime(n, 1);
vector <ll> v;

int main(){

    isPrime[0] = isPrime[1] = 0;
    isPrime[0] = 2;
    isPrime[1] = 3;
    for(ll j = 2 * 2; j * j < n; j += 2){
        isPrime[j] = false;
    }

    for(ll i = 2; i <= n; i++){
        if(isPrime[i] == true){
			v.push_back(i);
            for(ll j = 2 * i; j < n; j += i){
                isPrime[j] = false;
            }
        }
    }
	for(ll i = 0; i * i <= n; i += 100) printf("%lld\n", v[i]);
	return 0;
}
