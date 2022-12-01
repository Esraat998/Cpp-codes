#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll a, b;
		cin >> a >> b;
		if(a > b) cout << "NO" << endl;
		else{
			if(b % a == 0) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	return 0;
}


