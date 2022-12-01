#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll t; cin >> t;
	while(t--){
		ll n; cin >> n;
		string s; cin >> s;
		if(n <= 2) cout << s << endl;
		else{
			sort(s.begin(), s.end());
			cout << s << endl;
		}
	}
	return 0;
}


