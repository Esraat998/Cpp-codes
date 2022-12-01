#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int x, n, m, c = 0;
		cin >> x >> n >> m;
		m = m * 10;
		while(x <= m || n--){
			if(x <= m){
				c = 1; break;
			}
			x = (x / 2) + 10;
		}
		if(c == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
