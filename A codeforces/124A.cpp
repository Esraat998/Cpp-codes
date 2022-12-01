#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, n;
	cin >> n >> a >> b;
	n -= a;
	if(n > b) cout << b + 1 << endl;
	else cout << n << endl;
	return 0;
}


