#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
using namespace std;

int main(){
	ll t; cin >> t;
	while(t--){
        ll n; cin >> n;
        vector <ll> v(n);
        for(ll i = 0; i < n; i++) cin >> v[i];
        if(v[0] == 1){
            yes;
        }
        else no;
	}
	return 0;
}





