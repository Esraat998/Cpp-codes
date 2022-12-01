#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector <int> v;
		for(int i = 0; i < n; i++){
			string s; cin >> s;
			int m1 = 0, m2 = 0;
			if(n % 2 == 0){
				for(int i = 0; i < s.size() / 2; i++){
					if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
						m1++; break;
					}
				}
				for(int i = s.size() / 2; i < s.size(); i++){
					if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
						m2++; break;
					}
				}
			}
			else{
				for(int i = 0; i <= s.size() / 2; i++){
					if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
						m1++; break;
					}
				}
				for(int i = (s.size() / 2) + 1; i < s.size(); i++){
					if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
						m2++; break;
					}
				}
			}
			if(m1 > 0 && m2 > 0) v.push_back(1);
			else v.push_back(0);
		}
		for(int i = 0; i < n; i++) cout << v[i];
		cout << endl;
	}
	return 0;
}

