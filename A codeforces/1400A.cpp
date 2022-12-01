#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s, ss = "";
		cin >> s;
		for(int i = 0; i < s.size(); i += 2){
			ss += s[i];
		}
		cout << ss << endl;
	}
	return 0;
}



