#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x, y;
	cin >> n;
	if(n >= 0) cout << n << endl;
	else{
		x = n / 10;
		y = n / 100 * 10 + n % 10;
		int mx = max(x, y);
		cout << mx << endl;
	}
	return 0;
}
