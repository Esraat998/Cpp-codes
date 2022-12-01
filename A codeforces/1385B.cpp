#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector <int> v;
		map <int, int> mp;
		for(int i = 0; i < n * 2; i++){
			int x;
			cin >> x;
			if(mp[x] == 0){
				mp[x]++;
				v.push_back(x);
			}
		}
		for(int i = 0; i < v.size(); i++){
			cout << v[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
