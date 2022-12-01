#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, cnt = 0;
	cin >> n;
	vector <int> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	for(int i = 1; i < n; i++){
		if(v[i] != v[i - 1]){
			cnt += v[i] - v[i - 1] - 1;
		}
	}
	cout << cnt << endl;
	return 0;
}
