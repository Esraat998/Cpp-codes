#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll x, y, z;
		cin >> x >> y >> z;
		ll sum = y / x;
		if(sum > z) cout << 0 << endl;
		else{
			cout << z - sum << endl;
		}
	}
	return 0;
}

