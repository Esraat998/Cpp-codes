#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s, ss;
		cin >> s >> ss;
		int cnt = 0;
		int len = s.size();
		for(int i = 0; i < len; i++){
			if(s[i] == ss[i]) cout << "G";
			else cout << "B";
		}
		cout << endl;
	}
	return 0;
}


