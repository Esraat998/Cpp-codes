#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		vector <int> v;
		int adj = 1;
		for(int i = 0; i < 4; i++){
			int x;
			cin >> x;
			v.push_back(x);
		}
		for(int i = 0; i < 4; i++){
			if(v[i] == v[i + 1]) adj++;
		}
		if(adj == 4) cout << "NO" << endl;
		else cout << "YES"<< endl;
	}
	return 0;
}
