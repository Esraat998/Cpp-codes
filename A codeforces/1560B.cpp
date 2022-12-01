#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b, c;
		cin >> a >> b >> c;
		int n = 2 * abs(a - b);
		if(a > n || b > n || c > n) cout << -1 << endl;
		else cout << (n / 2 + c - 1) % n + 1 << endl;
	}
	return 0;
}
