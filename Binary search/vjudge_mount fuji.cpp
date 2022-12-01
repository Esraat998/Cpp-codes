#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n; cin >> n;
	vector <ll> v(n);
	for(int i = 0; i < n; i++) cin >> v[i];
	sort(v.begin(), v.end());
	ll q; cin >> q;
	while(q--){
		int a; cin >> a;
		ll low = 0, high = n - 1, mark = 0;
		if(v[low] == a || v[high] == a){
				cout << 1 << endl; continue;
			}
		for(int i = 0; i < sqrt(n); i++){
			ll mid = (low + high) / 2;
			if(v[mid] == a){
				mark = 1; break;
			}
			else if(a < v[mid]) high = mid - 1;
			else low = mid + 1;
		}
		if(mark == 1) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}

