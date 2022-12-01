#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long x = 1;
		while(x <= n) x *= 2;
		x /= 2;
		cout << x - 1 << endl;
	}
	return 0;
}


