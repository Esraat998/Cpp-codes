#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		bool mark = false;
		string p, h, s = "";
		cin >> p >> h;
		sort(p.begin(), p.end());
		for(int i = 0; i < h.size(); i++){
			s = h.substr(i, p.size());
			sort(s.begin(), s.end());
			if(p == s){
				mark = true;
				break;
			}
		}
		if(mark) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
