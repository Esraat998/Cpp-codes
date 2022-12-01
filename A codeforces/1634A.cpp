#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		string rev = s;
		reverse(rev.begin(), rev.end());
		if(rev == s || k == 0){
			cout << 1 << endl;
		}
		else cout << 2 << endl;
	}
	return 0;
}
