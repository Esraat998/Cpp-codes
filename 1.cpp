#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
using namespace std;

int main(){
	ll t; cin >> t;
	while(t--){
        ll n, m; cin >> n >> m;
        ll csz = n * n;
        int arr[i][j];
        for(ll i = 0; i < n; i++){
            for(ll j = i; j < n; j++){
                cin >> arr[i][j];
            }
        }
        if(n == m){
            no;
        }
        else{
            yes;
        }
	}
	return 0;
}





