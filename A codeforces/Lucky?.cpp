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
		string s;
		cin >> s;
		ll cnt1, cnt2;
		cnt1 = s[0] + s[1] + s[2];
		cnt2 = s[3] + s[4] + s[5];
		if(cnt1 == cnt2) yes;
		else no;
	}
	re;
}

