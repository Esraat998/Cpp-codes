#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector <int> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	int m;
	cin >> m;
	vector <int> vv(m);
	for(int i = 0; i < m; i++){
		cin >> vv[i];
	}
	sort(v.begin(), v.end());
	sort(vv.begin(), vv.end());
	int i = 0, j = 0, ans = 0;
	while(i < n && j < m){
		if(abs(v[i] - vv[j]) <= 1){
			ans++;
			i++;
			j++;
		}
		else if(v[i] < vv[j]) i++;
		else j++;
	}
	cout << ans << endl;
	return 0;
}
