#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		vector <int> v;
		vector <int> vv;
		int cnt = 0;
		string s;
		cin >> s;
		int len = s.size();
		if(len % 2 == 0){
			for(int i = 0; i < len / 2; i++){
				v.push_back(s[i]);
			}
			for(int i = len / 2; i < len; i++){
				vv.push_back(s[i]);
			}
			for(int i = 0; i < v.size(); i++){
				if(v[i] == vv[i]) cnt++;
			}
		}
		if(cnt == len / 2 && len > 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
