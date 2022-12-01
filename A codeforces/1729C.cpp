#include <bits/stdc++.h>
#define ii pair<char, int>
#define ll long long
using namespace std;


int main(){
    map <char, int> mp;
	int cnt = 1;
	for(char ai = 'a'; ai <= 'z'; ai++){
		mp[ai] = cnt;
		cnt++;
	}
    int t;
    cin >> t;
    while(t--){
		string s;
        cin >> s;
        int n = s.size();
        vector <pair<int, int>> v, ans;
        for(int i = 0; i < n; i++) v.push_back({mp[s[i]], i + 1});
        int mn = min(mp[s[0]], mp[s[n - 1]]);
        int mx = max(mp[s[0]], mp[s[n - 1]]);
        sort(v.begin(), v.end());

        for(int i = 0; i < v.size(); i++){
            if(v[i].first >= mn && v[i].first <= mx) ans.push_back({v[i].first, v[i].second});
        }
//        cout << ans.size() << endl;
//        for(int i = 0; i < ans.size(); i++) cout << ans[i].first << " " << ans[i].second << endl;
//        cout << endl;
        cout << abs(mx - mn) << " " << ans.size() << endl;
        sort(ans.begin(), ans.end());
        cout << 1 << " ";
        if(mp[s[0]] > mp[s[n - 1]]){
			for(int i = ans.size() - 2; i > 0; i--) cout << ans[i].second << " ";
        }
        else{
			for(int i = 1; i < ans.size() - 1; i++){
				cout << ans[i].second << " ";
			}

        }
        cout << n << endl;
    }
    return 0;
}
