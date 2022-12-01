#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	vector <int> v(m);
	for(int i = 0; i < m; i++){
		cin >> v[i];
	}
	long long int cnt = v[0] - 1;
	for(int i = 0; i < m - 1; i++){
		if(v[i] > v[i + 1]) cnt += n - (v[i] - v[i + 1]);
		else if(v[i] < v[i + 1]) cnt += v[i + 1] - v[i];
	}
	cout << cnt << endl;
	return 0;
}
