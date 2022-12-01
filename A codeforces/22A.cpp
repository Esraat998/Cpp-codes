#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;
	vector <int> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end());
//	for(int i = 0; i < n; i++){
//		if(v[i] == v[i + 1]) v.pop_back(v[i]);
//	}
	for(int i = 0; i < n - 1; i++){
		if(v[i + 1] > v[i]){
			cout << v[i + 1] << endl; return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
