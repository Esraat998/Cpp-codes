#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c;
	int x, y, z, n, cnt = 0;
	cin >> a >> b >> c >> x >> y >> z;
	cin >> n;
	int cup = a + b + c;
	int med = x + y + z;
	cnt += (cup + 5 - 1) / 5;
	cnt += (med + 10 - 1) / 10;
	if(cnt <= n){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	//cout << cnt << endl;
}
