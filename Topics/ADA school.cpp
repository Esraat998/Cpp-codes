#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int dsa, toc, dm, a, b, c;
		cin >> dsa >> toc >> dm;
		cin >> a >> b >> c;
		int drag = 0, sloth = 0, tie = 0;
		if(dsa + toc + dm > a + b + c) cout << "Dragon" << endl;
		else if(dsa + toc + dm < a + b + c) cout << "Sloth" << endl;
		else if(dsa > a || toc > b) cout << "Dragon" << endl;
		else if(a > dsa || b > toc) cout << "Sloth" << endl;
		else if(a == dsa && b == toc && c == dm) cout << "TIE" << endl;
	}
	return 0;
}




