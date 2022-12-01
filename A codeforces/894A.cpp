#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int q = 0, a = 0, ans = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'Q'){
			ans += q;
			a++;
		}
		else if(s[i] == 'A'){
			q += a;
		}
	}
	cout << ans << endl;
	return 0;
}
