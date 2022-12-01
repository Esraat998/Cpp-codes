#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector <int> v(n);
	for(int i = 0; i < n; i++) cin >> v[i];
	int od = 0, ev = 0;
	for(int i = 0; i < n; i++){
		if(v[i] % 2 == 0) ev++;
		else od++;
	}
	if(ev > 0 && od > 0) sort(v.begin(), v.end());
	for(int i = 0; i < n; i++){
		cout << v[i] << " " ;
	}
	cout << endl;
	return 0;
}
