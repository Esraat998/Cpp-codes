#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int arr[1000000];
	arr[0] = 0;
	for(int i = 1; i <= n; i++){
		int x;
		cin >> x;
		arr[i] = arr[i - 1] + x;
	}
	int ans = 0, mx = INT_MAX;
	for(int i = 0; i <= n - k; i++){
		if(arr[i + k] - arr[i] < mx){
			mx = arr[i + k] - arr[i];
			ans = i;
		}
	}
	cout << ans + 1 << endl;
	return 0;
}

