#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int cnt = 1;
		string s;
		cin >> s;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == s[i + 1]) cnt++;
		}
		int n = cnt - 1;
		cout << pow(2, n) << endl;
	}
	return 0;
}
