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
		ll x;
		cin >> x;
		ll coin = x * 50;
		cout << coin - ((10 * x) + (10 * x) + (15 * x)) << endl;
	}
	return 0;
}


