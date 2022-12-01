#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll int n, ans = 1;
		ll mod = 1e9 + 7;
		cin >> n;
		for(int i = 3; i <= 2 * n; i++){
			ans = (ans * i) % mod;
		}
		cout << ans << endl;
	}
	return 0;
}

