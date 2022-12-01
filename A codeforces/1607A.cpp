#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s, ss;
		cin >> s >> ss;
		int sum = 0;
		map <char, int> mp;
		vector <int> v;
		for(int i = 1; i <= 26; i++){
			mp[s[i - 1]] = i;
		}
		for(int i = 0; i < ss.size(); i++){
			v.push_back(mp[ss[i]]);
		}
		for(int i = 0; i < v.size() - 1; i++){
			sum += abs(v[i] - v[i + 1]);
		}
		cout << sum << endl;
	}
	return 0;
}
