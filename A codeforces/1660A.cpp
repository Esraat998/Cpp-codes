#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll a, b, sum = 0;
		cin >> a >> b;
		if(a == 0) cout << 1 << endl;
		else{
			sum = a + (b * 2);
			cout << sum + 1 << endl;
		}
	}
	return 0;
}

