#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int x, y, a, b;
		cin >> x >> y >> a >> b;
		int p = max(abs(x - a), abs(y - b));
		cout << p << endl;
	}
	return 0;
}



