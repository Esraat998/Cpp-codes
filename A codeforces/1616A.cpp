#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, cnt = 0;
		cin >> n;
		map <int, int> mp;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			if(x == 0) cnt = 1;
			else{
				mp[x++];
				if(x == 2) cnt += 2;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
