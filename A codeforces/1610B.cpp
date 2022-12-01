#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){

		int n, cnt = 0, c = 0;
		cin >> n;
		vector <int> v(n);
		for(int i = 0; i < n; i++){
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		if(v.size() == 1 || v.size() == 2){
			cout << "YES" << endl;
		}
		else{
			for(int i = 0; i < n; i++){
				if(v[i] == v[i + 1]) cnt++;
				else c++;
			}
			if(cnt > c) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	return 0;
}
