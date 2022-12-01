#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		vector <int> v(n);
		for(int i = 0; i < n; i++) cin >> v[i];
		for(int i = 0; i < n; i++){
			if(v[i] <= k){
				cout << 1;
				k -= v[i];
			}
			else cout << 0;
		}
		cout << endl;
	}
	return 0;
}


