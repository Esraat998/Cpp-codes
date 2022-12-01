#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string s, score = "";
	map <string, int> mp;
	for(int i = 0; i < n; i++){

		cin >> s;
		mp[s]++;
		if(mp[s] > mp[score]) score = s;
	}
//	for(auto s : mp){
//
//	}
	cout << score << endl;
	return 0;
}
