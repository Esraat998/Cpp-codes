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
		vector <ll> v;
		for(ll i = 0; i < n; i++){
			ll x;
			cin >> x;
			v.push_back(x);
		}
		for(int i = 0; i < n; i++){
			if(v[i] > 1000 || v[i] == 1000) cnt++;
		}
		cout << cnt << endl;
	}
	re;
}

