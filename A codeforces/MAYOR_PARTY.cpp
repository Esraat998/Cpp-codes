#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b, c;
		cin >> a >> b >> c;
		int cnt = max(a, max(b, c));
		if(a == b && b == c) cout << a + c << endl;
		else if(cnt == b) cout << b << endl;
		else cout << a + c << endl;
	}
	return 0;
}

