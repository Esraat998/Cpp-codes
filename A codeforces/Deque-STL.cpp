#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long int n, k, max;
		cin >> n >> k;
		long long int arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		for(int i = 0; i <= n - k; i++){
			max = arr[i];
			for(int j = 1; j < k; j++){
				if(arr[i + j] > max)
					max = arr[i + j];
			}
			cout << max << " ";
		}
		cout << endl;
	}
	return 0;
}
