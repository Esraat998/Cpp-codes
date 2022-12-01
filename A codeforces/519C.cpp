#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int a = (n + m) / 3;
	int b = min(n, m);
	int team = min(a, b);
	cout << team << endl;
	return 0;
}
