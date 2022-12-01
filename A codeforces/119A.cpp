#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, n, val = 0;
	cin >> a >> b >> n;
	int flag = 0;
	while(n > 0){
		if(flag == 0){
			val = __gcd(a, n);
			n -= val;
			flag = 1;
		}
		else{
			val = __gcd(b, n);
			n -= val;
			flag = 0;
		}
	}
	if(flag == 0) cout << 1 << endl;
	else cout << 0 << endl;
	return 0;
}
