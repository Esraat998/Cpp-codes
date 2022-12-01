#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		set <int> s;
		for(int i = 0; i < n; i++) {
			int x;
			cin >> x;
			s.insert(x);
		}
		int len = s.size();
		for(int i = 0; i < n; i++){
			if(i < len) cout << len << " ";
			else cout << i + 1 << " ";
		}
		cout << endl;
	}
	return 0;
}

