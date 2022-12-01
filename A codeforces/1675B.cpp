#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin >> t;
    while (t--){
        ll n;
		cin >> n;
		ll arr[n];
		for(int i = 0; i < n; i++) cin >> arr[i];
		ll cnt = 0;
		for (ll i = n - 2; i >= 0; i--){
			while(arr[i + 1] <= arr[i] && arr[i]){
				arr[i] /= 2;
				cnt++;
			}
		}
		bool check = false;
		for (ll i = 0; i < n - 1; i++){
			if (arr[i + 1] <= arr[i])
				check = true;
		}
		if(check) cout <<- 1 << endl;
		else cout << cnt << endl;
	}
	return 0;
}
