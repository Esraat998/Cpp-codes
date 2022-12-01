#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int l, r, a;
		cin >> l >> r >> a;
		int p = (r + 1) / a;
		p *= a;
		int v = r;
		if(p > l){
			v = p - 1;
		}
		cout <<(v / a) + (v % a)<< endl;
	}
	return 0;
}


