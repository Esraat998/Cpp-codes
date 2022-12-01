#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n, cnt = 0;
		cin >> n;
		vector <ll> v;
		for(int i = 0; i < n; i++){
			ll x;
			cin >> x;
			v.push_back(x);
		}
		for(ll i = 0; i < n; i++){
			for(ll j = i + 1; j < n; j++){
				ll sum1 = v[i] + v[j] ;
				ll sum2 = v[i] * v[j];
				if(sum1 >= sum2) cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}

