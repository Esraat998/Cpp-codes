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
		string s;
		cin >> s;
		ll cnt = 0;
		for(ll i = 0; i < n - 1; i += 2){
			if(s[i] == '1' && s[i + 1] == '0') cnt++;
			else if(s[i] == '0' && s[i + 1] == '1') cnt++;
		}
		cout << cnt << endl;
	}
	re;
}

