#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		vector <int> v;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			v.push_back(x);
		}
		int sz = n / 2;
		int sum = 0;
		sort(v.begin(), v.end());
		reverse(v.begin(), v.end());
		for(int i = sz; i < n; i++){
			sum += v[i];
		}
		cout << sum << endl;
	}
	return 0;
}



