#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int arr[n + 7];
		if(n == 1) cout << 1 << endl;
		else{
			arr[1] = 1;
			for(int i = n; i > 1; i -= 2){
				arr[i] = i - 1;
				arr[i - 1] = i;
			}
			for(int i = 1; i <= n; i++) cout << arr[i] << " ";
			cout << endl;
		}
	}
	return 0;
}
