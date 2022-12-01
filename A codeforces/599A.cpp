#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	int sol = min(a + a + b + b, min(a + b + c, min(a + a + c + c, b + b + c + c)));
	cout << sol << endl;
	return 0;
}
