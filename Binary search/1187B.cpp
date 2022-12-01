#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	string s; cin >> s;
//	vector <char> v(n);
//	for(int i = 0; i < n; i++) cin >> v[i];
	int t;
	cin >> t;
	while(t--){
		string ss; cin >> ss;
		cout << upper_bound(s.cbegin(), s.cend(), ss) - s.cbegin() << endl;
	}
}
