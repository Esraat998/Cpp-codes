#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector <int> v;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			v.push_back(x);
		}
		int od = 0, ev = 0, m = 0;
		for(int i = 0; i < n; i++){
			if(v[i] % 2 == 0) ev++;
			if(v[i] % 2 == 1) od++;
		}
		if(od == n || ev == n) m = 1;
		else{
			for(int i = 0; i < n; i++){
				if(i % 2 == 0) v[i]++;
			}
			int cnt = 0, c = 0;
			for(int i = 0; i < n; i++){
				if(v[i] % 2 == 0) cnt++;
			}
			for(int i = 0; i < n; i++){
				if(v[i] % 2 == 1) c++;
			}
			if(cnt == n || c == n) m = 1;
		}
		if(m == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}

