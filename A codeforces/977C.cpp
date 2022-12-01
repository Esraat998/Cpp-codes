#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	vector <int> v(n);
	for(int i = 0; i < n; i++) cin >> v[i];
	sort(v.begin(), v.end());
	if(k == 0 && v[0] != 1) cout << 1 << endl;
	else if(n == k) cout << v[k - 1] << endl;
	else if(v[k - 1] != v[k] && k != 0) cout << v[k - 1] << endl;
	else cout << -1 << endl;
	return 0;
}

