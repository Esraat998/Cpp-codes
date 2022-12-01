#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		if(k == 0) cout << "Off" << endl;
		else{
			if(n % 2 == 0) cout << "On" << endl;
			else cout << "Ambiguous" << endl;
		}
	}
	return 0;
}




