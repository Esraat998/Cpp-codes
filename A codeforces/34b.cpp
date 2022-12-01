#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, amount, ans = 0;
	cin >> n >> amount;
	vector <int> v;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < amount; i++){
		if(v[i] < 0) ans += abs(v[i]);
	}
	cout << ans << endl;
	return 0;
}
