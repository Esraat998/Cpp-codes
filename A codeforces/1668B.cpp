#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n, m;
		cin >> n >> m;
		vector <int> v(n);
		for(ll i = 0; i < n; i++) cin >> v[i];
		sort(v.begin(), v.end());
		ll cnt = n;
		for(ll i = 1; i < n; i++){
			cnt += max(v[i], v[i - 1]);
		}
		cnt += max(v[0], v[n - 1]);
		if(cnt > m) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}
