#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector <int> a(n);
//		vector <pair<int, int>> v;
//		for(int i = 0; i < n; i++){
//			int x; cin >> x;
//			v.push_back({x, i});
//		}
//		for(int i = 0; i < n; i++){
//			cout << v[n - 1].second << endl;
//		}
	for(int &x : a) cin >> x;
	cout << max_element(a.begin(), a.end()) - a.begin() + 1 << endl;
	}
	return 0;
}
