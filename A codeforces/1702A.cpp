#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll t; cin >> t;
	while(t--){
		string s; cin >> s;
		string ss = "1";
		ll sz = s.size();
//		if(sz == 1){
//			int x = stoi(s);
//			cout << x - 1 << endl;
//		}
		for(int i = 1; i < sz; i++) ss += '0';
		ll x = stoi(s);
		ll y = stoi(ss);
		cout << x - y << endl;
	}
	return 0;
}

