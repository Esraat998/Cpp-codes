#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int sol = n * (n - 1) / 2;
		cout << sol << endl;
	}
	return 0;
}
