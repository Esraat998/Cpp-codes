#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, a, b, ans = 0;
	cin >> n >> a >> b;
	ans = a + b;
	ans = ans % n;
	if(ans <= 0) ans += n;
	cout << ans << endl;
	return 0;
}

