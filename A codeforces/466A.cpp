#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	int c, d, e, f;
	c = n / m;
	d = n % m;
	e = c * b;
	f = n * a;
	int price = min(e, f);
	if(d * a > b){
		price += b;
	}
	else{
		price += d * a;
	}
	cout << price << endl;
	return 0;
}
