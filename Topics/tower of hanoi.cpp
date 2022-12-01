#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[205];

int main(){
	int t, n;
	ll x, y;
	cin >> t;
	//assert(t <= 10);
	while(t--){
		cin >> n;
		//assert(n <= 200);
		vector <pair <ll , ll >> v;
		for(int i = 0; i < n; i++){
			cin >> x >> y;
			//assert(x <= 1000000000);
			//assert(y <= 1000000000);
			v.push_back(make_pair(x, y));
		}
		sort(v.begin(), v.end());
		dp[0] = v[0].second;
		ll ans = v[0].second;
		for(int i = 0; i < n; i++){
			dp[i] = v[i].second;
			for(int j = 0; j < i; j++){
				if(v[i].second > v[j].second && v[i].first > v[j].first)
					dp[i] = max(dp[i], dp[j] + v[i].second);
			}
			ans = max(dp[i], ans);
		}
		cout << "the answer is : " << ans << endl;
	}
	return 0;
}
