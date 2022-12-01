#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++){
		int n; cin >> n;
		map <string, int> mp;
		vector <string> v;
		for(int i = 0; i < n; i++){
			string s; cin >> s;
			mp[s]++;
			v.push_back(s);
		}
		int mx = INT_MIN;
		for(int i = 0; i < n; i++){
			mx = max(mx, mp[v[i]]);
		}
		string ans;
		for(auto it : mp){
			if(it.second == mx) ans = it.first;
		}
		cout << "Case " << i << ": " << ans << endl;
	}
}
