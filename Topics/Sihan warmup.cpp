#include <bits/stdc++.h>
using namespace std;

int main(){
	map <string, string> mp, ans;
	int t;
	cin >> t;
	while(t--){

		string a, b;
		cin >> a >> b;
		//mp.insert(make_pair(a, b));
		if(mp.find(a) == mp.end()){
			mp[a] = a;
		}
		mp[b] = mp[a];
		ans[mp[a]] = b;

	}
	cout << ans.size() << endl;
	map <string, string> :: iterator it;
	for(it = ans.begin(); it != ans.end(); it++){
		cout << it -> first << " " << it -> second << endl;
	}
	return 0;
}
