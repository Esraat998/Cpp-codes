#include <bits/stdc++.h>
using namespace std;

int main(){
	string x, y;
	int cnt = 0;
	cin >> x;
	for(int i = 0; i < 5; i++){
		cin >> y;
		if(x[0] == y[0] || x[1] == y[1]) cnt++;
	}
	if(cnt > 0) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
