#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		if(n % 3 == 1) cout << "HUGE" << endl;
		else if(n % 3 == 0) cout << "NORMAL" << endl;
		else cout << "SMALL" << endl;
	}
	return 0;
}

