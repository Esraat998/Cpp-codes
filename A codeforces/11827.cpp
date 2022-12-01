#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
	while(1){
		int mod = a % b ;
		if(mod == 0){
			return b ;
		}
		else{
			a = b ;
			b = mod;
		}
	}
}

int main(){
	int N, arr[1000];
	cin >> N;
	getchar();
	string s;

	while(N--){
		getline(cin, s);
		stringstream ss(s);
		int x = 0;
		while(ss >> arr[x]){
			++x;
		}
		int ans = 0;
		for(int i = 0; i < x; i++){
			for(int j = i + 1; j < x; j++){
				ans = max(ans, GCD(arr[i], arr[j]));
			}
		}
		cout << ans << endl;
	}
	return 0;
}
