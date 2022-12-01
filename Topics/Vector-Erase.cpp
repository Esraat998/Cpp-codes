#include <bits/stdc++.h>
using namespace std;

int main(){
	vector <int> v;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	int q;
	int a, b;
	cin >> q >> a >> b;
	v.erase(v.begin() + (q - 1));
	v.erase(v.begin() + (a - 1), v.begin() + (b - 1));
	cout << v.size() << endl;
	for(int j = 0; j < v.size(); j++){
		cout << v[j] << " ";
	}
	return 0;
}
