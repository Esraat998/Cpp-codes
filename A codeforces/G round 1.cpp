#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, a = 0, b = 0;
	cin >> n;
	string s;
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		if(s[i] < s[i + 1]){
			a++;
		}
		if(s[i] > s[i + 1]){
			b++;
		}
	}
	if(b > 0) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
