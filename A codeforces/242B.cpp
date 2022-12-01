#include <bits/stdc++.h>
using namespace std;

int main(){
	vector <int> v;
	vector <int> v1;
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		int l, r;
		cin >> l >> r;
		v.push_back(l);
		v1.push_back(r);
	}
	int a = *min_element(v.begin(), v.end());
	int b = *max_element(v1.begin(), v1.end());
	for (int i = 0; i < t; ++i) {
		if (v[i] == a && v1[i] == b) {
			cout << i + 1 << endl; return 0;
		}
	}

	cout << -1 << endl;
	return 0;
}

