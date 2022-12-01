#include <bits/stdc++.h>
#define pair pair<int, int>
#define ll long long
#define sort sort(v.begin(), v.end())
#define rev reverse(v.begin(), v.end())
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define re return 0

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vector <ll> v;
		for(ll i = 0; i < n; i++){
			ll x;
			cin >> x;
			v.push_back(x);
		}
		ll m; cin >> m;
		ll sum = 0;
		for(int i = 0; i < m; i++){
			ll y;
			cin >> y;
			sum += y;
		}
		cout << v[sum % n] << endl;
	}
	re;
}

