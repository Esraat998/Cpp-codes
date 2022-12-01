#include <bits/stdc++.h>
using namespace std;

int main(){
	int mark = 0;
	string s;
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9') mark = 1;
	}
	if(mark) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
