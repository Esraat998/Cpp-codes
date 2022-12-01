#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		int mon = b * 30;
		if(mon > a) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}


