#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int a, b, ans = 1;
	cin >> a >> b;
	int x = min(a, b);
	for(int i = 1; i <= x; i++){
		ans = ans * i;
	}
	cout << ans << endl;
	return 0;
}
