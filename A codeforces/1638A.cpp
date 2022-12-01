#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		vector <int> v;
		int n;
		cin >> n;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		for(int i = 0; i < (n / 2); i++){
			if(v[i] > v[i + 1]) swap(v[i], v[i + 1]);
		}
		for(int i = n / 2; i < n - 1; i++){
			if(v[i] < v[i + 1]) swap(v[i], v[i + 1]);
		}
		for(int i = 0; i < n; i++){
			cout << v[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
