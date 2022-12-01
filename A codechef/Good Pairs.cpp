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
		ll n, cnt = 0;
		cin >> n;
		vector <ll> v(n), vv(n);
		for(int i = 0; i < n; i++) cin >> v[i];
		for(int i = 0; i < n; i++) cin >> vv[i];
		map <pair, ll> mp;
		for(int i = 0; i < n; i++){
			cnt += mp[{v[i], vv[i]}];
			mp[{vv[i], v[i]}]++;
		}
		cout << cnt << endl;
	}
	re;
}

