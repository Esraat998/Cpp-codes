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
		int s = 0;
		sort(v.begin(), v.end());
		for(int i = 0 ; i < n - 1; i++){
			if(v[i] < v[i+1]){
				s = n - i - 1; break;
			}
		}
		cout << s << endl;
	}
	return 0;
}
