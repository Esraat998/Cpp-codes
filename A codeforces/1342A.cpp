#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int t;
	cin >> t;
	while(t--){
		long long int x, y, a, b, ans = 0, ans1 = 0;
		cin >> x >> y >> a >> b;
		ans = a * (abs(y - x)) + b * min(x, y);
		ans1 = (x+y) * a;
		cout << min(ans, ans1) << endl;
	}
	return 0;
}

