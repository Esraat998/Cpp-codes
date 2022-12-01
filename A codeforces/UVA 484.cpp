#include <bits/stdc++.h>
#define ii pair<int, int>
using namespace std;

int main(){
	int x;
	map <int, int> mp;
	while(1){
		cin >> x;
		mp[x]++;
	}
	for(auto it : mp) cout << it.first << " " << it.second << endl;
	return 0;
}

