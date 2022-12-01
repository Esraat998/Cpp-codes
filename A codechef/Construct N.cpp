#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int c = 0;
		if(n % 2 == 0) c = 1;
		if(n % 7 == 0) c = 1;
		else if(n - 2 >= 7 && n - 7 >= 2) c = 1;
		if(c == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}


