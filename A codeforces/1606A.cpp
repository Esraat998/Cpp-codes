#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int cnt1 = 0, cnt2 = 0, cnt = 0;
		if(s.size() == 1) cout << s << endl;
		else{
			for(int i = 0; i < s.size() - 1; i++){
				if(s[i] == 'a' && s[i + 1] == 'b') cnt1++;
				else if(s[i] == 'b' && s[i + 1] == 'a') cnt2++;
			}
			if(cnt1 == cnt2) cout << s << endl;
			else if(cnt1 > cnt2){
				for(int i = 0; i < s.size(); i++){
					if(s[i] == 'a' && cnt != cnt1 - 1){
						s[i] = 'b';
						cnt++;
					}
				}
			}
			else if(cnt1 < cnt2){
				for(int i = 0; i < s.size(); i++){
					if(s[i] == 'b' && cnt != cnt2 - 1){
						s[i] = 'a';
						cnt++;
					}
				}
			}
			cout << s << endl;
		}
	}
	return 0;
}
