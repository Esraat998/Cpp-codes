#include <bits/stdc++.h>
using namespace std;

int main(){
	int cnt = 1;
	string s;
	cin >> s;
	for(int i = 1; i < s.size(); i++){
		if(s[i] == s[i - 1]) {
			cnt++;
			if(cnt >= 7){
				cout << "YES" << endl; return 0;
			}
		}
		else cnt = 1;
	}

	cout << "NO" << endl;
	return 0;
}
