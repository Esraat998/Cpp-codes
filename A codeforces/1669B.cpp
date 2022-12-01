#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, mark = 0, ans = 0;
		cin >> n;
		map <int, int> mp;
		vector <int> v;
		for(int i = 0; i < n;i++){
			int x;
			cin >> x;
			v.push_back(x);
			mp[x]++;
		}
		for(int i = n - 1; i >= 0; i--){
			if(mp[v[i]] >= 3){
				ans = v[i];
				mark = 1; break;
			}
		}
		if(mark == 1) cout << ans << endl;
		else cout << -1 << endl;
	}
	return 0;
}
