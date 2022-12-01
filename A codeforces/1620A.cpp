#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int cnt = 0;
		string s;
		cin >> s;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == 'N') cnt++;
		}
		if(cnt == 1) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}
