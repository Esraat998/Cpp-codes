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
		ll a, b, m, sum = 0;
		cin >> a >> b >> m;
		if(b > a) sum = min(b - a, (a + m - b));
		else sum = min(a - b, (m - a + b));
		cout << sum << endl;
	}
	re;
}

