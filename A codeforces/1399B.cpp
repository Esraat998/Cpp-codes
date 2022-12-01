#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		vector <ll> v;
		vector <ll> vv;
		ll mv = INT_MAX, mvv = INT_MAX, cnt = 0;
		ll n; cin >> n;
		for(int i = 0; i < n; i++){
			ll x;
			cin >> x;
			v.push_back(x);
		}
		for(int i = 0; i < n; i++){
			ll x;
			cin >> x;
			vv.push_back(x);
		}
		for(int i = 0; i < n; i++){
			mv = min(mv, v[i]);
			mvv = min(mvv, vv[i]);
		}
		for(int i = 0; i < n; i++){
			cnt += max(v[i] - mv, vv[i] - mvv);
		}
		cout << cnt << endl;
	}
	return 0;
}
