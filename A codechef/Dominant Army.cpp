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
		ll a, b, c;
		cin >> a >> b >> c;
		ll mx = max(a, max(b, c));
		if(mx == a){
			if(a > b + c) yes;
			else no;
		}
		else if(mx == b){
			if(b > a + c) yes;
			else no;
		}
		else if(mx == c){
			if(c > a + b) yes;
			else no;
		}
	}
	re;
}
