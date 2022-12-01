#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int ans = 0;
		int cntr = 0, cntg = 0, cntb = 0;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == 'r'){
				for(int j = i; j < s.size(); j++){
					if(s[j] == 'R') ans++;
				}
			}
			if(s[i] == 'g'){
				for(int j = i; j < s.size(); j++){
					if(s[j] == 'G') ans++;
				}
			}
			if(s[i] == 'b') {
				for(int j = i; j < s.size(); j++){
					if(s[j] == 'B') ans++;
				}
			}
		}
		if(ans == 3) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
