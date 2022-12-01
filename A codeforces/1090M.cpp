#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k, ans = 1, cnt = 1;
	cin >> n >> k;
	vector <int> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	for(int i = 1; i <= n - 1; i++){
		if(v[i] != v[i - 1]) cnt++;
		else cnt = 1;
		ans = max(ans, cnt);
	}
	cout << ans << endl;
	return 0;
}
