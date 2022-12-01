#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	int n = 7 - max(a, b);
	if(n == 1) cout << "1/6" << endl;
	if(n == 2) cout << "1/3" << endl;
	if(n == 3) cout << "1/2" << endl;
	if(n == 4) cout << "2/3" << endl;
	if(n == 5) cout << "5/6" << endl;
	if(n == 6) cout << "1/1" << endl;
	return 0;
}
