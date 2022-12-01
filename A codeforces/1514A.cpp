#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		bool mark = true;
		cin >> n;
		for(int i = 0; i < n; i++){
			int a;
			cin >> a;
			if(a != (int)sqrt(a) * (int)sqrt(a)){
				mark = false;
			}
		}
		if(mark) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}
