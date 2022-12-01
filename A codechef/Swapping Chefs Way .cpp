#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, flag = 0; cin >> n;
		string s, str;
		cin >> s;
		str = s;
		sort(s.begin(), s.end());
		for(int i = 1; i <= n; i++){
			if(str[i] != s[i]){
				swap(str[i], str[n - 1 - i]);
			}
		}
		if(str == s) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}

