#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k, cnt = 0;
	cin >> n >> k;
	int ar[n];
	for(int i = 0; i < n; i++) cin >> ar[i];
	k--;
	for(int i = n - 1; i >= 0; i--){
		if(ar[i] != ar[n - 1]) break;
		cnt = i;
	}
	if(cnt > k) cout << -1 << endl;
	else cout << cnt << endl;
	return 0;
}
