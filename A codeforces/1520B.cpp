#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll int n, ans = 0;
		cin >> n;
		for(ll i = 1; i <= 9; i++){
			for(ll j = i; j <= n; ){
				ans++;
				j = (j * 10) + i;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
