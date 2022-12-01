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
		int n, m;
		cin >> n >> m;
		vector <ll> v;
		for(ll i = 0; i < n; i++){
			ll x;
			cin >> x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		reverse(v.begin(), v.end());
		int pls = 0, mns = 0, cnt = 0;
		for(int i = 1; i < v.size(); i++){
			if(v[0] != v[i]){
				pls = v[0] + v[i];
				mns = v[i] - v[0]; cnt++;
			}
			if(cnt == 1) break;
		}
		int mod = mns % m;
		int sum = pls + mod;
		cout << "pls----" << pls << endl;
		cout << "mns----" << mns << endl;
		cout << "mod-----" << mod << endl;
		cout << sum << endl;
	}
	re;
}

