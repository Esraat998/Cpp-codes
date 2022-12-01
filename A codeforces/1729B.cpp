#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
	string s, x; cin >> s;
	for(int i = n - 1; i >= 0; i--){
		int f = int(s[i]) - 48;
		if(s[i] == '0'){
			int a = int(s[i - 1]) - 48;
			int b = int(s[i - 2]) - 48;
			int sum = a + (b * 10);
			x += char(96 + sum); i -= 2;
		}
		else x += char(96 + f);
	}
	reverse(x.begin(), x.end());
	cout << x << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
