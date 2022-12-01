#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
	int arr[t + 9];
	for(int i = 1; i <= t; i++) cin >> arr[i];
	int ans = 0, c = 0, x = 0;
	for(int i = 1; i <= t; i++){
		c = 0;
		x = arr[i];
		while(x != -1){
			x = arr[x];
			c++;
		}
		ans = max(ans, c);
	}
	cout << ans + 1 << endl;
}
