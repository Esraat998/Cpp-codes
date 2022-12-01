#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	if(n % k == 0) cout << k - (n / k) << endl;
	if(n % k != 0){
		int a = n % k;
		cout << k + a + 1 << endl;
	}
	return 0;
}
