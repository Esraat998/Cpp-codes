#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		ll a, b, c, d;
		cin >> a >> b >> c >> d;
		ll sum = a * d;
		ll sus = b * c;
		if(sum == sus) cout << 0 << endl;
		else if(sum == 0 || sus == 0 || sus % sum == 0 || sum % sus == 0) cout << 1 << endl;
		else cout << 2 << endl;
	}
	return 0;
}

