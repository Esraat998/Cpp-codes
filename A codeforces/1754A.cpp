#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
using namespace std;

int main(){
	ll t; cin >> t;
	while(t--){
		ll n; cin >> n;
		string s; cin >> s;
		ll q = 0;
		for(ll i = 0; i < n; i++){
			if(s[i] == 'Q') q++;
			else{
				q--;
				if(q < 0) q = 0;
			}
		}
		if(q == 0){
			yes;
		}
		else{
			no;
		}
	}
	return 0;
}





