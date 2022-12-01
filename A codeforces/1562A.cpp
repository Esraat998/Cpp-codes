#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long int l, r, ans;
		cin >> l >> r;
		if(r / 2 < l) cout << r - l << endl;
		else cout << r - ((r / 2) + 1) << endl;
	}
	return 0;
}
