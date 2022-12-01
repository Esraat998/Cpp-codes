#include <bits/stdc++.h>
using namespace std;

int main(){
	set <int>  s;
	int t;
	cin >> t;
	while(t--){
		int x, y;
		cin >> y >> x;
		if(y == 1) s.insert(x);
		else if(y == 2) s.erase(x);
		else{
			if(s.find(x) != s.end()) cout << "Yes" << endl;
			else cout << "No" << endl;
		}
	}
	return 0;
}
