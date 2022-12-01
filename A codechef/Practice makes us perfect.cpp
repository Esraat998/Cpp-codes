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
	int a, b, c, d, cnt = 0;
	cin >> a >> b >> c >> d;
	if(a >= 10) cnt++;
	if(b >= 10) cnt++;
	if(c >= 10) cnt++;
	if(d >= 10) cnt++;
	cout << cnt << endl;
	re;
}

