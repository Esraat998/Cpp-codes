#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int len = s.size();
	cout << s[len - 1];
	for(int i = 0; i < len - 1; i++){
		cout << s[i];
	}
	cout << endl;
	for(int i = 2; i < len; i++){
		cout << s[i];
	}
	cout << s[0] << s[1] << endl;
	return 0;
}
