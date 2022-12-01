#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, cnt = 0;
		string s;
		cin >> n >> s;
		for(int i = 0; i < n; i++){
			if(s[i] == ')' && cnt != 0)cnt--;
			if(s[i] == '(') cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}
