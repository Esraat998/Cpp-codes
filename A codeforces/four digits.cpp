#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int len = s.size();
	if(len == 4) cout << s << endl;
	else if(len == 1) cout << 0 << 0 << 0 << s << endl;
	else if(len == 2) cout << 0 << 0 << s << endl;
	else if(len == 3) cout << 0 << s << endl;
	return 0;
}
