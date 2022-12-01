#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a = 0, b = 0;
		string s;
		cin >> s;
		int n = s.size();
		for(int i = 0; i < n; i++){
			if(s[i] == '0') a++;
			else b++;
		}
		if(min(a, b) == 0) cout << "NET" << endl;
		else if(min(a, b) % 2) cout << "DA" << endl;
		else cout << "NET" << endl;
	}
	return 0;
}

