#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int toast = k * l / nl;
	int lime = c *  d;
	int salt = p / np;
	int ans = min(toast, min(lime, salt)) / n;
	cout << ans << endl;
	return 0;
}
