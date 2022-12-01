#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long a, b, c, d;
		cin >> a >> b >> c >> d;
		long long ans1 = max(a, b);
		long long ans2 = max(b, c);
		long long ans3 = min(c, d);
		cout << ans1 << " " << ans2 << " " << ans3 << endl;
	}
	return 0;
}
