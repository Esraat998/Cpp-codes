#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int px, py, qx, qy;
		cin >> px >> py >> qx >> qy;
		int p = 2 * qx - px;
		int q = 2 * qy - py;
		cout << p << " " << q << endl;
	}
	return 0;
}
