#include <bits/stdc++.h>
using namespace std;

int main(){
	set <string> s;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		string ss;
		cin >> ss;
		s.insert(ss);
	}
	auto iterator :: it;
	for(it = s.begin(); it != s.end(); i++){
		cout << *it << endl;
	}
	return 0;
}
