#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int ans = INT_MAX;
		vector <int> v;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());

		for(int i = 0; i < n - 1; i++){
			ans = min(ans, abs(v[i] - v[i + 1]));
		}
		cout << ans << endl;
	}
	return 0;
}
