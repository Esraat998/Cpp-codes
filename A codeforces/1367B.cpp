#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, cnt1 = 0, cnt2 = 0, s = 0;
		cin >> n;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			if(i % 2 == 0) cnt1++;
			if(x % 2 == 0) cnt1--;
			if(i % 2 != 0) cnt2++;
			if(x % 2 != 0) cnt2--;
			if(i % 2 != x % 2) s++;
		}
		if(cnt1 != cnt2) cout << -1 << endl;
		else cout << s / 2 << endl;
	}
}
