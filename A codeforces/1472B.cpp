#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, cnt1 = 0, cnt2 = 0;
		cin >> n;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			if(x == 1) cnt1++;
			else cnt2++;
		}
		if((cnt1 + 2 * cnt2) % 2 == 0 && (cnt1 > 0 || cnt2 % 2 == 0)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
