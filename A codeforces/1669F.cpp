#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		vector <int> v;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			v.push_back(x);
		}
		int l = 0, r = n - 1;
		int al = v[l], bo = v[r];
		int cnt = 2;
		int ans = 0;
		while(l < r){
			if(al == bo){
				ans = cnt;
				al += v[++l];
				cnt++;
			}
			else if(al < bo){
				al += v[++l];
				cnt++;
			}
			else{
				bo += v[--r];
				cnt++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
