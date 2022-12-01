#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n, k;
	cin >> n >> k;
	long long odd = (n + 1) / 2;
	if(odd >= k) cout << (k * 2) - 1 << endl;
	else{
		k -= odd;
		cout << k * 2 << endl;
	}
	return 0;
}
