#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long r, b, d;
		cin >> r >> b >> d;
		if(r > b) swap(r, b);
//		int p = abs(r - b);
		if(r * (d + 1) >= b) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}


