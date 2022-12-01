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
		int p, q, m, n;
		cin >> p >> q >> m >> n;
		if(p >= m && p <= n) cout << p << endl;
		else if(m >= p && m <= q) cout << m << endl;
		else cout << p + m << endl;
	}
	re;
}

