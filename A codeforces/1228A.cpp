#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b;
	string s;
	cin >> a >> b;
	set <char> ss;
	bool mark = false;
	for(int i = a; i <= b; i++){
		s = to_string(i);
		ss.clear();
		for(int i = 0; i < s.size(); i++)
			ss.insert(s[i]);
			if(ss.size() == s.size()){
				cout << s << endl;
				mark = true;
				break;
			}
	}

	if(!mark) cout << -1 << endl;
	return 0;
}
