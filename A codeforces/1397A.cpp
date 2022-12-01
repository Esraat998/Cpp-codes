#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		string s;
		cin >> n;
		map <char, int> mp;
		set <int> ss;
		for(int j = 0; j < n; j++){
			cin >> s;
			int len = s.size();
			for(int i = 0; i < len; i++){
				mp[s[i]]++;
				ss.insert(s[i]);
			}
		}
		int check = 0;
		for(auto x : ss){
			if(mp[x] % n != 0) check = 1;
		}
		if(check == 1) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}

