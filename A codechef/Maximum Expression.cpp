#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll t; cin >> t;
	while(t--){
		vector <char> v;
		ll n; cin >> n;
		string s, ss = ""; cin >> s;
		sort(s.begin(), s.end());
		vector <char> c, ch;
		for(ll i = 0; i < n; i++){
			if(s[i] == '+' || s[i] == '-') c.push_back(s[i]);
			else ch.push_back(s[i]);
		}
		sort(c.begin(), c.end());
		reverse(c.begin(), c.end());
		sort(ch.begin(), ch.end());
		for(ll i = 0; i < c.size(); i++){
////			cout << "add " << ch[i] << " " << c[i] << endl;
			v.push_back(ch[i]);
			v.push_back(c[i]);
		}
		for(ll i = c.size(); i < ch.size(); i++) v.push_back(ch[i]);
		reverse(v.begin(), v.end());
		for(ll i = 0; i < v.size(); i++) cout << v[i];
		cout << endl;
	}
	return 0;
}


