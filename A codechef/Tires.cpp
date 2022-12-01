#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int len = s.size();
	if(s[len - 1] == 'r') cout << "er" << endl;
	else cout << "ist" << endl;
	return 0;
}
