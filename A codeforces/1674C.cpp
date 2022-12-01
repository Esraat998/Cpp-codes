#include <bits/stdc++.h>
#define pair pair<int, int>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define re return 0

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s, ss;
		cin >> s >> ss;
		if(ss.size() == 1 && ss == "a") cout << 1 << endl;
		else{
			ll n = s.size();
			ll ans = pow(2, n);
			int cnta = 0;
			for(int i = 0; i < ss.size(); i++){
				if(ss[i] == 'a') cnta++;
			}
			if(cnta > 0) cout << -1 << endl;
			else cout << ans << endl;
		}
	}
	return 0;
}

