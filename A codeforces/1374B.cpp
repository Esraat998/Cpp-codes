#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, cnt = 0;
		cin >> n;
		while(true){
			bool ok = false;
			while(n % 6 == 0){
				n = n / 6;
				cnt++;
			}
				if(n % 3 == 0){
					n = n * 2;
					cnt++;
				}
				else break;
		}
		if(n == 1) cout << cnt << endl;
		else cout << -1 << endl;
	}
	return 0;
}
