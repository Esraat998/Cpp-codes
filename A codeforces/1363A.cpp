#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x, odd = 0, even = 0;
		cin >> n >> x;
		for(int i = 0; i < n; i++){
			int a;
			cin >> a;
			if(a % 2) odd++;
			else even++;
		}
		if(n == odd && x % 2 == 0){
			cout << "NO" << endl;
		}
		else{
			x--;
			if(odd % 2) odd--;
			else odd -= 2;
			if(even + odd >= x && odd >= 0) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	return 0;
}
