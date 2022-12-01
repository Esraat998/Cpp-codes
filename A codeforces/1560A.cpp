#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int x;
		cin >> x;
		for(int i = 1; i < 100000; i++){
			if(i % 3 != 0 && i % 10 != 3){
				x--;
				if(x == 0){
					cout << i << endl;
					break;
				}
			}
			////else cout << x << endl;
		}
	}
	return 0;
}
