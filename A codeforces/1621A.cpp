#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		if(2 * k - 1 > n) cout << - 1 << endl;
		else{
			for(int i = 0; i < n; i++){
				for(int j = 0; j < n; j++){
					if(i == j && i % 2 == 0 && i < 2 * k) cout << "R";
					else cout << ".";
				}
				cout << endl;
			}
		}
	}
	return 0;
}
