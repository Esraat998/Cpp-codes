#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k, sum = 0;
		cin >> n >> k;
		vector <int> v;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			sum += x;
			v.push_back(x);
		}
		if(sum < k) cout << v.size() << endl;
		else{
			if(n == 1) cout << 1 << endl;
			else{
				int mx = INT_MIN, mn = INT_MAX;
				for(int i = 0; i < v.size() - 1; i++){
					mx = max(v[i], v[i + 1]);
					mn = min(v[i], v[i + 1]);
				}

			}
		}
	}
	return 0;
}

