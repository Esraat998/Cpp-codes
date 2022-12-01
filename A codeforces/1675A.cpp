#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll a, b, c, x, y, cnt = 0;
		cin >> a >> b >> c >> x >> y;
		if(a >= x) cnt++;
		else{
			x -= a;
			if(c >= x){
				c -= x; cnt++;
			}
		}
		if(b >= y) cnt++;
		else{
			y -= b;
			if(c >= y){
				c -= y; cnt++;
			}
		}
		if(cnt > 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}

