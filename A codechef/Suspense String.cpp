#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s; cin >> s;
		int m = n / 2;
		if(n % 2) m++;
		deque <char> dq;
		string alice = "", bob = "";
		reverse(bob.begin(), bob.end());
		for(int i = 0; i < m; i++) alice += s[i];
		for(int i = m; i < n; i++) bob += s[i];
		for(int i = 0; i < alice.size(); i++){
			if(alice[i] == '0') dq.push_front('0');
			else dq.push_back('1');
			if(i < bob.size()){
				if(bob[i] == '1') dq.push_front('1');
				else dq.push_back('0');
			}
		}

		for(auto it : dq) cout << it;
		cout << endl;
	}
	return 0;
}
