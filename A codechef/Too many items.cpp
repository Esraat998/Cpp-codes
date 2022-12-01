#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
//		vector <int> v;
		for(int i = 2; i <= 10; i++){
			if(n / i <= 10){
				cout << i << endl; break;
			}
		}
	}
	return 0;
}

