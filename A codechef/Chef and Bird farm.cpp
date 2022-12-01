#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll a, b, c;
		cin >> a >> b >> c;
		if(c % a == 0 && c % b == 0) cout << "ANY" << endl;
		else if(c % a == 0 && c % b != 0) cout << "CHICKEN" << endl;
		else if(c % a != 0 && c % b == 0) cout << "DUCK" << endl;
		else cout << "NONE" << endl;
	}
	return 0;
}


