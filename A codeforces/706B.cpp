#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector <int> v(n);
	for(int i = 0; i < n; i++) cin >> v[i];
	sort(v.begin(), v.end());
	int q; cin >> q;
	while(q--){
		int mark = 0;
		int a; cin >> a;
		int ans = upper_bound(v.begin(), v.end(), a) - v.begin() ;
		if(v[0] > a) cout << 0 << endl;
		else cout << ans << endl;
	}
	return 0;
}
