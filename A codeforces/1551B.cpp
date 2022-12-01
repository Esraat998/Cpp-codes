#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int ans = 0, cnt = 0;
		map <int, char> mp;
		for(int i = 0; i < s.size(); i++){
			mp[s[i]]++;
		}
		for(auto x : mp){
			if(x.second > 1) ans++;
			else cnt++;
		}
		cout << ans + cnt / 2 << endl;
	}
	return 0;
}
