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
		int a =n, b = 0, ans = 0;
		for(int i = 0; i < n; i++){
			if(v[i] == 1){
				if(a == n) a = i;
				b = i;
			}
		}
		for(int i = a; i <= b; i++){
			if(v[i] == 0) ans++;
		}
		cout << ans << endl;
	}
	return 0;
}
