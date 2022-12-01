#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin >> n;
	if(n == 0) cout << 1 << endl;
	else{
		long long sum = n % 4;
		if(sum == 1) cout << 8 << endl;
		else if(sum == 2) cout << 4 << endl;
		else if(sum == 0) cout << 6 << endl;
		else cout << 2 << endl;
	}
	return 0;
}

