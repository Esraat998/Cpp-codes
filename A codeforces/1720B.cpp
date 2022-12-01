#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		vector <ll> v(n);
		for(int i = 0; i < n; i++) cin >> v[i];
		sort(v.begin(), v.end());
		ll sum = (v[v.size() - 1] - v[0]) + (v[v.size() - 2] - v[1]);
		cout << sum << endl;
	}
}
