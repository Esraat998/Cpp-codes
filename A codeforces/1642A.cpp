#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b, m, n, x, y;
		cin >> a >> b >> m >> n >> x >> y;
		if(b == n && y < b || n == y && b < n || b == y && n < b){
			if(b == n) cout << abs(a - m) << endl;
			else if(n == y) cout << abs(m - x) << endl;
			else cout << abs(a - x) << endl;
		}
		else cout << 0 << endl;
	}
	return 0;
}
