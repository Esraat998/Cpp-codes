#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector <int> v(n);
	for(auto &x : v) cin >> x;
	sort(v.begin(), v.end());
	if(n < 3 || v[n - 1] >= v[n - 2] + v[n - 3]) cout << "NO" << endl;
	else{
		cout << "YES" << endl;
		swap(v[n - 1], v[n - 2]);
		for(auto &x : v) cout << x << " ";
		cout << endl;
	}
	return 0;
}
