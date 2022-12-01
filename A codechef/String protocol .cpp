#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		int cnt = 0, copies = 0;
		for(int i = 0; i < s.size() - 1; i++){
			if(s[i] == s[i + 1]){
				cnt++;
				if(cnt < 2) copies++;
				else{
					cnt = 0;
				}
			}
			else copies++;
		}
		cout << copies << endl;
	}
	return 0;
}
