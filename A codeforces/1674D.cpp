#include <bits/stdc++.h>
#define pair pair<int, int>
#define ll long long
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
		vector <int> v;
		for(int i = 0; i < n; i++){
			ll x;
			cin >> x;
			v.push_back(x);
		}
		reverse(v.begin(), v.end());
		bool check = true;
		for(int i = 0; i < n - 1; i += 2){
			if(v[i] < v[i + 1]) swap(v[i], v[i + 1]);
		}
		for(int i = 0; i < n - 1; i++){
			if(v[i] < v[i + 1]){
				check = false; break;
			}
		}
		if(check) yes;
		else no;
	}
	re;
}

