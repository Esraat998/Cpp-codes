#include <bits/stdc++.h>
#define pair pair<int, int>
#define ll long long
#define rev reverse(v.begin(), v.end())
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define re return 0

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n, cnt = 0;;
		cin >> n;
		vector <ll> v;
		for(int i = 0; i < n; i++){
			ll x;
			cin >> x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		ll mn = v[0];
		for(int i = 0; i < n; i++){
			if(v[i] == mn) continue;
			else cnt += v[i] - mn;
		}
		cout << cnt << endl;
	}
	re;
}
