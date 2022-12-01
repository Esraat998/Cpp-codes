#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int cnta = 0, cntb = 0, a = 0, b = 0, x = 0;
		if(s.size() == 1) cout << "NO" << endl;
		else{
			for(int i = 0; i < s.size(); i++){
				if(s[i] == 'a') a++;
				if(s[i] == 'b') b++;
				if(s[i] == 'a' && s[i + 1] == 'a') cnta++;
				if(s[i] == 'b' && s[i + 1] == 'b') cntb++;
			}
			for(int i = 0; i < s.size() - 2; i++){
				if(s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'a') x++;
				else if(s[i] == 'b' && s[i + 1] == 'a' && s[i + 2] == 'b') x++;
			}
			int sz = s.size();
			if(s[sz - 1] == 'a' && s[sz - 2] == 'b') x++;
			if(s[sz - 1] == 'b' && s[sz- 2] == 'a') x++;
			if(s[0] == 'a' && s[1] == 'b') x++;
			if(s[0] == 'b' && s[1] == 'a') x++;
			if(cnta == 0 && cntb > 0 && a != 1 && x == 0) cout << "YES" << endl;
			else if(cntb == 0 && cnta > 0 && b != 1 && x == 0) cout << "YES" << endl;
			else if(cnta > 0 && cntb > 0 && x == 0) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	return 0;
}

