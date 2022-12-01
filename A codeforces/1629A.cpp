#include <bits/stdc++.h>
#define ii pair<int, int>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		vector <ii> v(n);
		for(int i = 0; i < n; i++){
			cin >> v[i].first;
		}
		for(int i = 0; i < n; i++){
			cin >> v[i].second;
		}
		sort(v.begin(), v.end());
		for(int i = 0; i < n; i++){
			if(k >= v[i].first) k+= v[i].second;
			else break;
		}
		cout << k << endl;
	}
	return 0;
}
