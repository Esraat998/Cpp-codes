#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int m1 = max(a, b);
	int m2 = max(c, d);
	cout << max(m1, m2) << endl;
	return 0;
}
