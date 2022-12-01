#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k, v;
		cin >> n >> k >> v;
		int arr[n];
		for(int i = 0; i < n; i++) cin >> arr[i];
		int sum = 0;
		for(int i = 0; i < n; i++) sum += arr[i];
		if(((n + k) * v - sum) % k == 0 && ((n + k) * v - sum) > 0) cout << ((n + k) * v - sum) / k << endl;
		else cout << -1 << endl;
	}
	return 0;
}
