#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, q, sum = 0;
	cin >> n >> q;
	vector <int> vv;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		vv.push_back(x);
	}
	for(int i = 0; i < q; i++){
		int x, v;
		cin >> x >> v;
		vv[x - 1] = v;
	}
	for(int i = 0; i < n - 1; i++){
		if(vv[i] % 2 != 0) sum++;
		if((vv[i] + vv[i + 1]) % 2 != 0) sum++;
	}
	cout << sum << endl;
	return 0;
}
