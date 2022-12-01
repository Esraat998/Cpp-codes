#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int w, x, y, z;
		cin >> w >> x >> y >> z;
		int c = 0;
		if(x == w || y == w || z == w) c = 1;
		if(x + y + z == w || x + y == w || x + z == w || y + z == w) c = 1;
		if(c == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}


