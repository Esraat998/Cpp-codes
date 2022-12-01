#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int x, y, a, b, cnt = 0;
		cin >> x >> y >> a >> b;
		if(x == a || x == b) cnt++;
		if(y == a || y == b) cnt++;
		if(cnt == 2) cout << 0 << endl;
		else if(cnt == 1) cout << 1 << endl;
		else if(cnt == 0) cout << 2 << endl;
	}
	return 0;
}


