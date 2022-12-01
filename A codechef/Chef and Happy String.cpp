#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll t; cin >> t;
	while(t--){
		string s; cin >> s;
		ll mark = 0;
		for(ll i = 0; i < s.size(); i++){
			if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
				if(s[i + 1] == 'a' || s[i + 1] == 'e' || s[i + 1] == 'i' || s[i + 1] == 'o' || s[i + 1] == 'u'){
					if(s[i + 2] == 'a' || s[i + 2] == 'e' || s[i + 2] == 'i' || s[i + 2] == 'o' ||s[i + 2] ==  'u'){
						mark = 1; break;
					}
				}
			}
		}
		if(mark == 1) cout << "HAPPY" << endl;
		else cout << "SAD" << endl;
	}

	return 0;
}


