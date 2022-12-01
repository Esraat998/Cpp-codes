#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long int n;
		cin >> n;
		set <long long int> s;
		vector <long long int> v;
		vector <long long int> vv;
		for(int i = 0; i < n; i++){
			long long int x;
			cin >> x;
			v.push_back(x);
		}
		vv.push_back(v[0]);
		for(int i = 1; i < v.size(); i++){
			vv.push_back(v[i] - v[i - 1]);
		}

		for(int i = 0; i < vv.size(); i++){
			s.insert(vv[i]);
		}
		if(s.size() == n) cout << "Won" << endl;
		else cout << "Lost" << endl;
	}
	return 0;
}
