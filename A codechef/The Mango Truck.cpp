#include <bits/stdc++.h>
#define ll long long
#define pair pair<int, int>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define re return 0

using namespace std;

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll a, b, c;
		cin >> a >> b >> c;
		ll d = c - b;
		cout << d / a << endl;
	}
	re;
}


