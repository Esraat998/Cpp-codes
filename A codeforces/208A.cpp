#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B'){
			continue;
		}
		else if(s[i] == 'U' && s[i - 1] == 'W' && s[i + 1] == 'B'){
			continue;
		}
		else if(s[i] == 'B' && s[i - 1] == 'U' && s[i - 2] == 'W') continue;
		else{
			cout << s[i];
			if(s[i + 1] == 'W' && s[i + 2] == 'U' && s[i + 3] == 'B') cout << " ";
		}
	}
	cout << endl;
	return 0;
}
