#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c, n;
	cin >> a >> b >> c >> n;
	if(a == b && b == c && c == n) cout << 1 << endl;
	else if(a % 2 == 0) cout << a << endl;
	else if(b % 2 == 0) cout << b << endl;
	else if(c % 2 == 0) cout << c << endl;
	else cout << n << endl;
	return 0;
}
