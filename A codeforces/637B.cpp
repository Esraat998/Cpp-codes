#include <bits/stdc++.h>
using namespace std;

int main(){
	map <string, bool> m;
	vector <string> v;
	int t;
	string s;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> s;
		v.push_back(s);
	}
	for(int i = t - 1; i >= 0; --i){
		if(m[v[i]] != 1){
			cout << v[i] << endl;
			m[v[i]] = 1;
		}
	}
	return 0;
}
