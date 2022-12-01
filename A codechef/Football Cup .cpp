#include <bits/stdc++.h>
#define pair pair<int, int>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define re return 0

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll x, y;
		cin >> x >> y;
		if(x > 0 && y > 0 && x == y) yes;
		else no;
	}
	return 0;
}

