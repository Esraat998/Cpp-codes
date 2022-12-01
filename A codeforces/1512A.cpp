#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		vector <int> v;
		int n, temp = 0;
		cin >> n;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			v.push_back(x);
		}
		if(v[0] == v[1] || v[0] == v[2]) temp = v[0];
		else if(v[1] == v[2]) temp = v[1];
		else if(v[1] == v[3]) temp = v[1];
		for(int i = 0; i < n; i++){
			if(v[i] != temp){
				cout << i + 1 << endl;
				break;
			}
		}
	}
	return 0;
}
