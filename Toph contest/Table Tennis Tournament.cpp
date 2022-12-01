#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int j = 1; j <= t; j++){
		int n;
		cin >> n;
		vector <int> v(n);
		for(int i = 0; i < n; i++){
			cin >> v[i];
		}
		int sum = 0;
		sort(v.begin(), v.end());
		for(int i = 1; i < n; i++){
			sum += v[i] - v[i - 1];
		}
		cout << "Case " << j << ": " << sum << endl;
	}
	return 0;
}

