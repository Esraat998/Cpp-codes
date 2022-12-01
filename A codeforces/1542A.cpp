#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, cnt = 0;
		cin >> n;
		for(int i = 0; i < n * 2; i++){
			int x;
			cin >> x;
			cnt += (x % 2);
		}
		if(cnt == n) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
