#include <bits/stdc++.h>
#define pair pair<int, int>
#define ll long long
#define st sort(v.begin(), v.end())
#define rev reverse(v.begin(), v.end())
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define re return 0

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b, c, d, cnt = 0;
		cin >> a >> b >> c >> d;
		if(b > a) cnt++;
		if(c > a) cnt++;
		if(d > a) cnt++;
		cout << cnt << endl;
	}
	re;
}

