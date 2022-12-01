#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		int cnt = 0;
		cin >> s;
		int len = s.size();
		for(int i = 0; i < len; i++){
			if(s[i] % 2 == 0) cnt = 1;
		}
		if(s[len - 1] % 2 == 0) cout << 0 << endl;
		else if(s[0] % 2 == 0) cout << 1 << endl;
		else if(cnt) cout << 2 << endl;
		else cout << -1 << endl;
	}
	return 0;
}
