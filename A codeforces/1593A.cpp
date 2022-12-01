#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long int a, b, c;
		cin >> a >> b >> c;
		cout << max(0LL, 1 + max(b, c) - a) << " " << max(0LL, 1 + max(a, c) - b) << " " << max(0LL, 1 + max(a, b) - c )<< endl;
	}
	return 0;
}
