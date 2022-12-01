#include <bits/stdc++.h>
using namespace std;

int main(){
	vector <int> v;
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		int n;
		cin >> n;
		v.push_back(n);
	}
	sort(v.begin(), v.end());
	int ans = 1, cnt = 1;
	for(int i = 0; i < t; i++){
		if(v[i] == v[i+1]){
			cnt++;
			ans = max(ans, cnt);
		}
		else cnt = 1;
	}
	cout << ans << endl;
	return 0;
}
