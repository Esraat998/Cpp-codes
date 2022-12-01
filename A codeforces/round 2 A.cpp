#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n, x, a = 0, b = 0;
	cin >> n >> x;
	for(int i = 0; i < n; i++){
		int m;
		cin >> m;
		a = a * x + m;
	}
	cin >> n >> x;
	for(int i = 0; i < n; i++){
		int p;
		cin >> p;
		b = b * x + p;
	}
	//cout << a << " " << b << " test" << endl;
	if(a < b) cout << "<" << endl;
	else if(a > b) cout << ">" << endl;
	else cout << "=" << endl;
	return 0;
}
