#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, cnt = 0;
		cin >> n;
		vector <int> v;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			v.push_back(x);
		}
		bool found = false;
		sort(v.begin(), v.end());
		for(int i = 0; i < n; i++){
			if(v[i] % 2 == 0) cnt++;
			if(i < n - 1 && v[i + 1] - v[i] == 1) found = true;
		}
		if(found == true || cnt % 2 == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}


