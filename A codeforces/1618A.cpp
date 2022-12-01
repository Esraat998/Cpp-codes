#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		vector <int> v;
		for(int i = 0; i < 7; i++){
			int x;
			cin >> x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		if(v[0] + v[2] == v[4]) cout << v[0] << " " << v[1] << " " << v[2] << endl;
		else cout << v[0] << " " << v[1] << " " << v[3] << endl;
	}
	return 0;
}
