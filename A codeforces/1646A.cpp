#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n, s, flag = 0;
		cin >> n >> s;
		if(s == 0) cout << 0 << endl;
		else{
			ll n1 = n * n;
			ll sum = s / n1;
			cout << sum << endl;
		}
	}
	return 0;
}


