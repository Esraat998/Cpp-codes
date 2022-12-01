#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x = 0;
		cin >> n;
		int in = n % 10;
		if(in == 9) x++;
		cout << (n / 10) + x << endl;
	}
	return 0;
}
