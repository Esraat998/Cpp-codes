#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, p;
		cin >> n >> p;
		vector <int> v;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			v.push_back(x);
		}
		int cnt = 0;
		for(int i = 0; i < n; i++){
			if(v[i] == 1 && v[i] < p) cnt += v[i];
			if(v[i] % 2 == 0 && v[i] < p) cnt += v[i];
		}
		cout << cnt << endl;
	}
	return 0;
}

