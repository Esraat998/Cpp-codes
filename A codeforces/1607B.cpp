#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll xo, n;
		cin >> xo >> n;
		ll x = n / 4 * 4;
		while(x < n){
			if(xo % 2 == 0)xo -= x + 1;
			else xo += x + 1;
			x++;
		}
		cout << xo << endl;
	}
	return 0;
}

