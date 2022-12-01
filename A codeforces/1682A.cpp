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
		int cnt = 0;
		for(int i = 0; i < n - 1; i++){
			if(s[i] == s[i + 1]) cnt++;
		}
		if(cnt == 0) cout << 1 << endl;
		else cout << cnt + 1 << endl;
	}
	re;
}

