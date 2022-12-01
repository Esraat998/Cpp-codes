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
		int sum = 0;
		for(int i = 0; i < n; i++){
			sum += v[i];
		}
		sum -= n;
		if(sum > 0) cout << sum << endl;
		else if(sum == 0) cout << 0 << endl;
		else cout << 1 << endl;
	}
	return 0;
}

