#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int cnt = 0, cnt1 = 0;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == 'B') cnt++;
			else cnt1++;
		}
		if(cnt == cnt1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
