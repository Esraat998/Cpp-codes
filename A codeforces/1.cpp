#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	for(int i = 1; i <= t; i++){

		int a, b, c, k;
		cin >> a >> b >> c >> k;
		if((a + b + c) % 3 == 0) cout << "Case " << i << ": peaceful" << endl;
		else cout << "Case " << i << ": Fight" << endl;
	}
	return 0;
}