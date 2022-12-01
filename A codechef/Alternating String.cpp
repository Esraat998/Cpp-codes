#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		string s;
		cin >> s;
		ll cnt1 = 0, cnt0 = 0;
		for(ll i = 0; i < n; i++){
			if(s[i] == '1') cnt1++;
			else cnt0++;
		}
		if(cnt0 == 0 || cnt1 == 0) cout << 1 << endl;
		else{
			if(cnt0 > cnt1) cout << cnt1 + cnt1 + 1 << endl;
			else if(cnt1 > cnt0) cout << cnt0 + cnt0 + 1 << endl;
			else cout << cnt1 + cnt0 << endl;
		}
	}
	return 0;
}
