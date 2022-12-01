#include <bits/stdc++.h>
using namespace std;

int main(){
	string s, h = "hello";
	cin >> s;
	int j = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == h[j]) j++;
	}
	if(j == 5) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
