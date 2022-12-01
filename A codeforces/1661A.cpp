#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector <int> v(n), vv(n);
		for(int i = 0; i < n; i++) cin >> v[i];
		for(int i = 0; i < n; i++) cin >> vv[i];
		long long ans = 0;
		for(int i = 0; i < n; i++){
			if(v[i] > vv[i]) swap(v[i], vv[i]);
		}
		for(int i = 0; i < n - 1; i++){
			ans += abs(v[i] - v[i + 1]);
			ans += abs(vv[i] - vv[i + 1]);
		}
		cout << ans << endl;
	}
}
