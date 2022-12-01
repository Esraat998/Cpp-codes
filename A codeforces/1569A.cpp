#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n, mark = 0;
		cin >> n;
		string s;
		cin >> s;
		for(int i = 0; i < n - 1; i++){
			if(s[i] != s[i + 1]){
				cout << i + 1 << " " << i + 2 << endl;
				mark = 1;
				break;
			}
		}
		if(mark != 1) cout << -1 << " " << -1 << endl;
	}
	return 0;
}
