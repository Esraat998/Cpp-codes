#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector <int> v(n), vv;
		for(int i = 0; i < n; i++) cin >> v[i];
			for(int j = 0; j < n; j++){
					int sum = v[j];
				int csize; cin >> csize;
				for(int a = 0; a < csize; a++){
					char c; cin >> c;
					if(c == 'D' && sum == 9) sum = 0;
					else if(c == 'D' && sum != 9) sum++;
					else if(c == 'U' && sum == 0) sum = 9;
					else sum--;
				}
				vv.push_back(sum);
			}
			for(int i = 0; i < vv.size(); i++) cout << vv[i] << " ";
			cout << endl;
	}
	return 0;
}

