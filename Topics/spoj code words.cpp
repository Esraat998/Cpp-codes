#include <bits/stdc++.h>
#define ii pair<int, int>
using namespace std;

int main(){
	int n;
	cin >> n;
	map <ii, string> mp;
	for(int i = 0; i < n; i++){
		int x, y;
		string s;
		cin >> x >> y >> s;
		mp[ii(x, y)] = s;

	}
	int q;
	cin >> q;
	for(int i = 0; i < q; i++){
		int a, b;
		cin >> a >> b;
		cout << mp[ii(a, b)] << endl;
	}
	return 0;
}

