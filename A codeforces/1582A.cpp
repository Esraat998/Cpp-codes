#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		 int a, b, c, sum = 0;
		 cin >> a >> b >> c;
		 sum = a + (b * 2) + (c * 3);
		 if(sum % 2 == 0) cout << 0 << endl;
		 else cout << 1 << endl;
	}
	return 0;
}
