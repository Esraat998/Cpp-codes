#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		map <string, int> mp;
		vector <string> v1, v2, v3;
		for(int i = 0; i < n; i++){
			string s; cin >> s; v1.push_back(s);
			mp[s]++;
		}
		for(int i = 0; i < n; i++){
			string s; cin >> s; v2.push_back(s);
			mp[s]++;
		}
		for(int i = 0; i < n; i++){
			string s; cin >> s; v3.push_back(s);
			mp[s]++;
		}
		int f1 = 0, f2 = 0, f3 = 0;
		for(int i = 0; i < n; i++){
			if(mp[v1[i]] == 1) f1 += 3;
			if(mp[v1[i]] == 2) f1 += 1;
			if(mp[v2[i]] == 1) f2 += 3;
			if(mp[v2[i]] == 2) f2 += 1;
			if(mp[v3[i]] == 1) f3 += 3;
			if(mp[v3[i]] == 2) f3 += 1;
		}
		cout << f1 << " " << f2 << " " << f3 << endl;
	}
	return 0;
}

