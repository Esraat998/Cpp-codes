#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector <int> v(n);
		for(int i = 0; i < n; i++) cin >> v[i];
		int l = -999;
		int r = -999;
		for(int i = 0; i < n; i++){
			if(l == -999 && v[i] == 0) r = i - 1;
			if(v[i] == 0) l = i + 1;
		}
		cout << l - r << endl;
	}
	return 0;
}
