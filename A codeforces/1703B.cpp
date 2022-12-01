#include <bits/stdc++.h>
using namespace std;

int main(){

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		set <char> s;
		vector <char> v;
		for(int i = 0; i < n; i++){
			char x; cin >> x;
			v.push_back(x);
			s.insert(x);
		}
		int sum = n - s.size();
		sum += s.size() * 2;
		cout << sum << endl;
	}
	return 0;
}

