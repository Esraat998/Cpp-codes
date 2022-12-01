#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, sum = 0;
		cin >> n;
		if(n >= 31 && n != 36 && n != 40 && n != 44){
			sum = 6 + 10 + 14;
			cout << "YES" << endl;
			cout << 6 << " " << 10 << " " << 14 << " " << n - sum << endl;
		}
		else if(n == 36) cout <<"YES" << endl << 6 << " " << 10 << " " << 15 << " " << 5 << endl;
		else if(n == 40) cout <<"YES" << endl << 6 << " " << 10 << " " << 15 << " " << 9 << endl;
		else if(n == 44) cout <<"YES" << endl << 6 << " " << 7 << " " << 10 << " " << 21 << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
