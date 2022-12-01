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
		ll n, sum = 0;
		cin >> n;
		vector <ll> v;
		for(ll i = 0; i < n; i++){
			ll x;
			cin >> x;
			v.push_back(x);
			sum += x;
		}

		if(sum % n == 0) cout << sum / n << endl;
		else cout << sum / n + 1 << endl;
	}
	re;
}

