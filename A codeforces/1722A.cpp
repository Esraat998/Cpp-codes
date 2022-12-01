#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s; cin >> s;
		string ss = "Timur";
		sort(s.begin(), s.end());
		sort(ss.begin(), ss.end());
		if(s == ss) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
