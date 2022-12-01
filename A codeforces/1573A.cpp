#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, ans = 0;
		cin >> n;
		string s;
		cin >> s;
		for(int i = 0; i < n; i++){
			ans += s[i] - '0';
			if(i != n - 1 && s[i] != '0') ++ans;
		}
		cout << ans << endl;
	}
	return 0;
}
