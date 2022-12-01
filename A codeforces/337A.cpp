#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, ans=10000000;
	cin >> n >> m;
	vector <int> v;
	for(int i = 0; i < m; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	for(int i = 0; i <= m - n; i++){
		ans = min(ans, v[i + n - 1] - v[i]);
	}
	cout << ans << endl;
	return 0;
}
