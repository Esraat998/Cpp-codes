#include <bits/stdc++.h>
#define ll long long
#define pair pair<int, int>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define re return 0

using namespace std;

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n; cin >> n;
		map <ll, ll> mp;
		for(int i = 0; i < n; i++){
			ll x;
			cin >> x;
			mp[x]++;
		}
		ll mx = 0, ans = 0, cnt = 0;
		for(auto it = mp.begin(); it != mp.end(); it++){
			if(mx < it -> second){
				ans = it -> first;
				mx = it -> second;
			}
		}
		for(auto it = mp.begin(); it != mp.end(); it++){
			if(it -> second == mx && cnt < 2) cnt++;
		}
		if(cnt == 2) cout << "CONFUSED" << endl;
		else cout << ans << endl;
	}
	re;
}




