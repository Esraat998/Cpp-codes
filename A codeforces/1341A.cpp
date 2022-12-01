#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, a, b, c, d;
		cin >> n >> a >> b >> c >> d;
		int s1 = a + b, s2 = a - b;
		int x = c + d, y = c - d;
		if(n * s1 < y || n * s2 > x) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}

