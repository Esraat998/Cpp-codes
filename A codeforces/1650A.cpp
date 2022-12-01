#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		char c;
		cin >> c;
		int cnt = 0;
		if(s.size() == 1){
			if(s[0] == c) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
		else{
			for(int i = 0; i < s.size(); i += 2){
				if(s[i] == c){
					cnt = 1;
					break;
				}
			}
			if(cnt == 1) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	return 0;
}
