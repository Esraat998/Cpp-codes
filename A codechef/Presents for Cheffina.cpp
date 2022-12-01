#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		if(n <= 4) cout << n << endl;
		else{
			if(n % 5 == 0){
				ll cnt = n / 5;
				cout << cnt * 4 << endl;
			}
			else if(n % 5 != 0){
				ll cnt = n / 5;
				ll sum = n - ((cnt * 4) + cnt);
				cout << sum + (cnt * 4) << endl;
			}
		}

	}
	return 0;
}



