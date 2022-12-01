#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		bool even = false, f = false;
		if(s[s.size() - 1] % 2 == 0) even = true;
		for(int i = 0; i < s.size() - 1; i++){
			if(s[i] % 2 == 0 && even){
				f = true;
			}
			else if(s[i] % 2 == 1 && !even) {
				f = true;
			}
		}
		if(f) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}

