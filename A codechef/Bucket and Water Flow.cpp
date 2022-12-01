#include <bits/stdc++.h>
#define pair pair<int, int>
#define ll long long
#define sort sort(v.begin(), v.end())
#define rev reverse(v.begin(), v.end())
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define re return 0

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll a, x, b, c;
		cin >> a >> x >> b >> c;
		ll sum = a + (b * c);
		if(sum > x) cout << "OVERFLOW" << endl;
		else if(sum == x) cout << "FILLED" << endl;
		else cout << "UNFILLED" << endl;
	}
	re;
}

