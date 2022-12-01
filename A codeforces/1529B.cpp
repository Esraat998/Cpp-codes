#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, cnt = 0;
		cin >> n;
		vector <int> v(n);
		for(int i = 0; i < n; i++){
			cin >> v[i];
		}
		int mn = INT_MAX, dif = 0;
		sort(v.begin(), v.end());
		for(int i = 0; i < n - 1; i++){
			dif = abs(v[i] - v[i + 1]);
			mn = min(mn, dif);
			if(dif >= max(v[i], v[i + 1]) && mn >= max(v[i], v[i + 1]))
				cnt++;
		}
		cout << cnt + 1 << endl;
	}
	return 0;
}

