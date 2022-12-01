#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		vector <int> v;
		int n;
		cin >> n;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			v.push_back(x);
		}
		int len = v.size();
		if(n % 2 == 0){
			for(int i = 0; i < len; i++, len--){
				cout << v[i] << " " << v[len - 1] << " ";
			}
			cout << endl;
		}
		else{
			int j = len / 2;
			for(int i = 0;i < j; i++, len--){
				cout<< v[i] <<" "<< v[len - 1] << " ";
			}
			cout << v[j];
			cout << endl;
			v.clear();
		}
	}
	return 0;
}
