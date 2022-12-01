#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[105];
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
		a[n + 1] = a[1];
		int g = 1100, pos = 1;
		for(int i = 1; i <= n; i++){
			if(g > abs(a[i] - a[i + 1])){
				g = abs(a[i] - a[i + 1]); pos = i;
			}
		}
	int x = pos + 1;
	if(x > n) x = 1;
	cout << pos << " " << x << endl;
	return 0;
}
