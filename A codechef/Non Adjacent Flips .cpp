#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, cnt = 0;
		cin >> n;
		string s;
		cin >> s;
		while(1){
			int cnt0 = 0;
			for(int i = 0; i < n; i++){
				if(s[i] == '0') cnt0++;
				if(s[i] == '1'){
					i += 2; s[i] = '0';
				}
				else i++;
			}
			if(cnt0 == n) break;
			else{
				cnt0 = 0; cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}

