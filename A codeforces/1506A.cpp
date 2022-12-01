#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n, m, x;
		cin >> n >> m >> x;
		x--;
		ll a = x % n;
		ll b = x / n;
		ll sum = a * m + b + 1;
		cout << sum << endl;
	}
	return 0;
}


