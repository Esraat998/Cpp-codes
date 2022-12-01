#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ll n, a = 1;
	cin >> n;
	while(a <= n) a *= 10;
	 a/= 10;
	 ll b = a;
	 while(b <= n){
		b += a;
	 }
//	 cout << b << endl;
	 cout << b - n << endl;
	return 0;
}
