#include <bits/stdc++.h>
using namespace std;

int main(){
	int k, cnt = 0, sum = 0, c = 0;
	cin >> k;
	vector <int> v;
	for(int i = 0; i < 12; i++){
		int x; cin >> x;
		v.push_back(x);
	}
	if(k == 0){
		cout << 0 << endl; return 0;
	}
	sort (v.begin(), v.end());
	for(int i = 11; i >= 0; --i){
		cnt++;
		sum += v[i];
		if(sum >= k){
			c = 1;
			break;
		}
	}
	if(c) cout << cnt << endl;
	else cout << -1 << endl;
	return 0;
}
