#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		string s;
		cin >> n >> s;
		if(n == 1 || s == "01" || s == "10") cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
