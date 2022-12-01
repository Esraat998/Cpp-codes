#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, flag = 0;
		cin >> n;
		vector <int> v(n);
		for(int i = 0; i < n; i++){
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		int cnt = n;
		for(int i = 0; i < n; i++){
			if(v[i] == v[0]) cnt--;
		}
		cout << cnt << endl;
	}
	return 0;
}
