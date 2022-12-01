#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k, sum = 0;
		cin >> n >> k;
		int x = sqrt(n);
		if(k <= x){
			if(n % 2 == 0 && k % 2 == 0 || k % 2 == 1 && n % 2 == 1) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}

