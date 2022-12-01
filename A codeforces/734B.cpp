#include <bits/stdc++.h>
using namespace std;

int main(){
	int k2, k3, k5, k6, ans = 0;
	cin >> k2 >> k3 >> k5 >> k6;
	int x = min(min(k2, k5), k6);
	ans += 256 * x;
	k2 -= x;
	ans += min(k2, k3) * 32;
	cout << ans << endl;
	return 0;
}
