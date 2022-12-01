#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		vector <char> v;
		int n;
		cin >> n;
		for(int i = 0; i < n - 2; i++){
			string s;
			cin >> s;
			if(i == 0){
				v.push_back(s[0]);
				v.push_back(s[1]);
			}
			else{
				if(v[v.size() - 1] == s[0]){
					v.push_back(s[1]);
				}
				else{
					v.push_back(s[0]);
					v.push_back(s[1]);
				}
			}
		}
		if(v.size() < n){
			v.push_back('a');
		}
		for(int i = 0; i < v.size(); i++){
			cout << v[i];
		}
		cout << endl;
	}
	return 0;
}
