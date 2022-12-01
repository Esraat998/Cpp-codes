#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a = 100000000;
		int n, c = 0;
		cin >> n;
		if(n > 19) cout << "NO" << endl;
		else{
			cout << "YES" << endl;
			for(int i = 0; i < n; i++){
				int n = pow(3, i);

				cout << n << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
