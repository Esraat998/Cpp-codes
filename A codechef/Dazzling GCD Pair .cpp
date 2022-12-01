#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b, g = 0, f;
		cin >> a >> b;
		if(a * 2 > b) cout << -1 << endl;
		else cout << a << " " << a * 2 << endl;
	}
	return 0;
}


