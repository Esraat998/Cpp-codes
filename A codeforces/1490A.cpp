#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, ans = 0;
		cin >> n;
		vector <int> v;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			v.push_back(x);
		}
		for(int i = 0; i < n - 1; i++){
			int mx = max(v[i], v[i + 1]);
			int mn = min(v[i], v[i + 1]);
			while(mn < (mx + 1) / 2){
				mn *= 2;
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}



