#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, cnt0 = 0, cnt = 0;
		cin >> n;
		vector <int> v;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			v.push_back(x);
		}
		for(int i = 0; i < n; i++){
			if(v[i] == 0) cnt0++;
			else cnt++;
		}
		cout << cnt0 << endl;
//		int sum = cnt0 - cnt;
//		if(sum <= 0) cout << cnt0 << endl;
//		else cout << min(cnt0, cnt) << endl;
	}
	return 0;
}

