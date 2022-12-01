#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int cnt0 = 0, cnt1 = 0, ans = 0;
		string s;
		cin >> s;
		int len = s.size();
		if(len == 1){
			cout << 0 << endl;
		}
		else{
			for(int i = 0; i < len; i++){
				if(s[i] == '0') cnt0++;
				else cnt1++;
				if(cnt0 != cnt1) ans = min(cnt0, cnt1);
			}
			cout << ans << endl;
		}
	}
	return 0;
}
