#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, d;
		cin >> n >> d;
		vector <int> v(n);
		for(int i = 0; i < n; i++)
			cin >> v[i];
		sort(v.begin(), v.end());
		if(v[0] + v[1] <= d || v[n - 1] <= d) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
