#include <bits/stdc++.h>
using namespace std;

int main(){
	map <int, int> mp;
	for(int i = 0; ;i++){
		int x;
		cin >> x;
		mp[x]++;
	}
	for(auto iterator it = it.begin(); it < it.end(); it++){
		cout << mp.first << " " << mp.second << endl;
	}
}
