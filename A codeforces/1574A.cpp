#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		vector <int> v;
		for(int i = 0; i < 3; i++){
			int x;
			cin >> x;
			v.push_back(x);
		}
		int m, mx, mn;
		cin >> m;
		sort(v.begin(), v.end());
		mx = (v[0] + v[1] + v[2]) - 3;
		mn = v[2] - (v[0] + v[1] + 1);
		if(m >= mn && m <= mx) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
