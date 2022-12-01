#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, ans = 1;
		cin >> n;
		vector <int> v(n);
		for(int i = 0; i < n; i++){
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		for(int i = 0; i < n; i++){
			if(v[i] <= i + 1) ans = i + 2;
		}
		cout << ans << endl;
	}
	return 0;
}
