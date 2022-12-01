#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int x = n;
		vector <int> v;
		for(int i = 2; i < sqrt(n); i++){
			if(n % i == 0){
				n = n / i;
				v.push_back(i);
				if(v.size() == 2) break;
			}
		}
		if(v.size() == 2) v.push_back(x / (v[0] * v[1]));
		if(v.size() == 3){
			cout << "YES" << endl;
			for(int i = 0; i < v.size(); i++){
				cout << v[i] << " ";
			}
			cout << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}
