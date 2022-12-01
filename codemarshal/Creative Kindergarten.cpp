#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, j = 1;
	cin >> t;
	while(t--){
		int n; cin >> n;
		vector <int> v(n);
		for(auto &x : v) cin >> x;
		int od = 0, ev = 0;
		for(int i = 0; i < n; i++){
			if(v[i] % 2 == 0) ev++;
			else od++;
		}
		if(ev == 1 && od > 0) cout << "Case " << j << ": " << "Yes" << endl;
		else  cout << "Case " << j << ": " << "No" << endl;
		j++;
	}
}
