#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector <int> v;
		for(int i = 2; i <= sqrt(n); i++){
			while(n % i == 0){
				n /= i;
				v.push_back(i);
			}
		}
		v.push_back(n);
		sort(v.begin(), v.end());
		if(v.size() == 1) cout << v[0] << endl;
		else for(int i = 0; i < v.size() - 1; i++){
			cout << v[i] << " ";
		}
		cout << v[v.size() - 1] << endl;
	}
	return 0;
}
