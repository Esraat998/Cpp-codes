#include <bits/stdc++.h>
using namespace std;

int main(){
	map <string, int> mp;
	int t;
	cin >> t;
	while(t--){
		int n, q;
		string s;
		cin >> n >> s;
		if(n == 1){
			cin >> q;
			mp[s] += q;
		}
		else if(n == 2) mp.clear();
		else{
			cout << mp[s] << endl;
		}
	}
	return 0;

}
