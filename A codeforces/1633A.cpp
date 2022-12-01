#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		if(n % 7 == 0) cout << n << endl;
		else{
			n -= n % 10;
			while(n % 7 != 0) n++;
			cout << n << endl;
		}
	}
	return 0;
}
