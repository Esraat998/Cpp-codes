#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		double x, y;
		cin >> x >> y;
		if(x == 0 && y == 0){
			cout << 0 << endl; continue;
		}
		int sq = x * x + y * y;
		bool c = false;
		for(int i = 0; i < 300; i++){
			if(i * i == sq){
				c = true; break;
			}
		}
		if(c) cout << 1 << endl;
		else cout << 2 << endl;
	}
	return 0;
}
