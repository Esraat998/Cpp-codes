#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n % 3 == 0){
			for(int i = 0; i < n / 3; i++){
				cout << "21";
			}
			cout << endl;
		}
		else if(n % 3 == 1){
			cout << 1;
			for(int i = 0; i < n / 3; i++){
				cout << "21";
			}
			cout << endl;
		}
		else{
			cout << 2;
			for(int i = 0; i < n / 3; i++){
				cout << 12;
			}
			cout << endl;
		}
	}
	return 0;
}

