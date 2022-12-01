#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int cnt = 0;
		if(s[0] == 'Y' || s[0] == 'y') cnt++;
		if(s[1] == 'E' || s[1] == 'e') cnt++;
		if(s[2] == 'S' || s[2] == 's') cnt++;

		if(cnt == 3) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
