#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b, p, q, x, y;
		cin >> a >> b >> p >> q >> x >> y;
		if(a == p && b == q || a == q && b == p) cout << 1 << endl;
		else if(a == x && b == y || a == y && b == x) cout << 2 << endl;
		else cout << 0 << endl;
	}
	return 0;
}



