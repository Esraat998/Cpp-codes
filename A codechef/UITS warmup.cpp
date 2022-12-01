#include <bits/stdc++.h>
using namespace std;

int main(){
	map <string, int> m;
	int t;
	cin >> t;
	string s;
	while(t--){
		cin >> s;
		if(m[s] == 0) cout << "OK" << endl;
		else cout << s << m[s] << endl;
		m[s]++;
	}
	return 0;
}
