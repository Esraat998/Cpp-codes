#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, maxi = 0, m = 0;
	cin >> n;
	vector <int> v;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	int pos = (n / 2);
	cout << v[pos] << endl;
	return 0;
}
