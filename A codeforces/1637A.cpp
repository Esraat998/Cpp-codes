#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, cnt = 0;
		cin >> n;
		vector <int> v;
		vector <int> vv;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			v.push_back(x);
			vv.push_back(x);
		}
		sort(v.begin(), v.end());
		for(int i = 0; i < n; i++){
			if(v[i] == vv[i]) cnt++;
		}
		if(cnt == n) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}
