#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string a, b; cin >> a >> b;
		int cnt = 0;
		for(int i = 0; i < n; i++){
			if(a[i] == b[i]) cnt++;
			else if(a[i] == 'B' && b[i] == 'G') cnt++;
			else if(a[i] == 'G' && b [i] == 'B') cnt++;
		}
		if(cnt == n) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}

