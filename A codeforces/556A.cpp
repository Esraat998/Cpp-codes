#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, c1 = 0, c2 = 0;
	cin >> n;
	string s;
	cin >> s;
	for(int i = 0; i < n; i++){
		if(s[i] == '0') c1++;
		else c2++;
	}
	cout << n - 2 * min(c1, c2) << endl;
	return 0;
}
