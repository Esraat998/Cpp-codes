#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b, c, yes = 0;
		cin >> a >> b >> c;
		if(a == b && a > 1) yes = 1;
		if(a % 2 == 0) a++;
		if(b % 2 == 0) b--;
		int d = (b - a) / 2 + 1;
		if(c >= d) yes = 1;
		if(yes == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
