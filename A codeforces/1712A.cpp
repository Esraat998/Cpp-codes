#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		vector <int> v(n);
		for(int i = 0; i < n; i++) cin >> v[i];
		int cnt = 0;
		for(int i = 0; i < k; i++){
			if(v[i] > k) cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}
