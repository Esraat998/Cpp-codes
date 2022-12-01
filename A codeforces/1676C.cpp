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
		ll n, m, mn = INT_MAX, ans = 0;
		cin >> n >> m;
		string s[n];
		for(int i = 0; i < n; i++) cin >> s[i];
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				for(int k = 0; k < m; k++){
					ans += abs(s[i][k] - s[j][k]);
				}
				mn = min(mn, ans);
				ans = 0;
			}
		}
		cout << mn << endl;
	}
	re;
}

