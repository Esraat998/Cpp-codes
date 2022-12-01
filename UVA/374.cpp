#include <bits/stdc++.h>
using namespace std;

int main(){
	while(1){
		long long b, p, m, sum = 0;
		cin >> b >> p >> m;
		sum = pow(b, p);
		cout << sum % m << endl;
	}
	return 0;
}
