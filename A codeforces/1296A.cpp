#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, odd = 0, even = 0, sum = 0;
		cin >> n;
		vector <int> v;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			sum += x;
			v.push_back(x);
		}
		if(sum % 2 != 0) cout << "YES" << endl;
		else{
			for(int i = 0; i < n; i++){
				if(v[i] % 2 == 0) even++;
				else odd++;
			}
			if(odd > 0 && even > 0) cout << "YES" << endl;
			else cout << "NO" << endl;
		}

	}
	return 0;
}
