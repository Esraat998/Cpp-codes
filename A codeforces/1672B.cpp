#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int len = s.size();
		if(len == 1) cout << "NO" << endl;
		else{
			int cnt = 0, a = 0, b = 0, mark = 0;
			if(s[0] == 'A' && s[len - 1] == 'B') cnt++;
			for(int i = 0; i < len; i++){
				if(s[i] == 'A') a++;
				else b++;
				if(b > a){
					mark = 1; break;
				}
			}
			if(a > b && cnt > 0 && mark == 0) cout << "YES" << endl;
			else if(a == b && cnt > 0 && mark == 0) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
}
