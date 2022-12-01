#include <bits/stdc++.h>
using namespace std;

int main(){
	map <string, int> m;
	int t;
	cin >> t;
	while(t--){
		string x;
		int q, y;
		cin >> q >> x;
		if(q == 1){
			 cin >> y;
			 m[x] += y;
		}
		else if(q == 2) m.erase(x);
		else{
			cout << m[x] << endl;
		}

	}
	return 0;
}
