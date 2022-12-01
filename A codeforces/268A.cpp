#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n;
	cin >> n;
	int ans = n;
	for(int i = 1; i <= n; i++){
		ans += i * (n - i);
	}
	cout << ans << endl;
	return 0;
}

