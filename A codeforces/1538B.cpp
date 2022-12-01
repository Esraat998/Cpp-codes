#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, sum = 0, ans = 0;
		cin >> n;
		vector <int> v;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			sum += x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		if(sum % n != 0) ans = -1;
		else{
			int res = sum / n;
			for(int i = 0; i < n; i++){
				if(res < v[i]) ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
