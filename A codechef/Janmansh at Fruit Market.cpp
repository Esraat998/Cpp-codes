#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		vector <int> v;
		int x, a, b, c;
		cin >> x >> a >> b >> c;
		int s = x - 1;
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);
		sort(v.begin(), v.end());
		int sum = v[0] * s + v[1];
		cout << sum << endl;
//		vector <int> v;
//		for(int i = 0; i < n; i++){
//			int x;
//			cin >> x;
//			v.push_back(x);
//		}
	}
	return 0;
}


