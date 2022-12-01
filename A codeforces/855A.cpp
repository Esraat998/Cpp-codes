#include <bits/stdc++.h>
using namespace std;

int main(){
	map <string, int> mp;
	int n;
	string s;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s;
		if(mp[s] == 0){
			cout << "NO" << endl;
			mp[s]++;
		}
		else cout << "YES" << endl;
	}
	return 0;
}
