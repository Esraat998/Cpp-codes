#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	string ss = "heidi";
	int j = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == ss[j]){
			j++;
		}
	}
	if(j == ss.size()) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
