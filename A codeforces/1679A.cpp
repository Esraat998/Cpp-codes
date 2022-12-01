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
		ll n;
		cin >> n;
		if(n < 4 || n % 2 != 0) cout << -1 << endl;
		else if(n == 4 || n == 6) cout << 1 << " " << 1 << endl;
		else cout << fixed << (long long) (ceil(n / 6.0)) << " " << (n / 4) << endl;
 	}
	re;
}

