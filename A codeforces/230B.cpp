#include <bits/stdc++.h>
using namespace std;

const int n = 1e7;
vector <bool> isprime(n, 1);

void seive(){
	isprime[0] = isprime[1] = 0;
	for(int i = 2 * 2; i * i <= n; i += 2){
		isprime[i] = false;
	}
	for(int i = 2; i <= n; i++){
		if(isprime[i] == true){
			for(int j = i * 2; j < n; j += i){
				isprime[j] = false;
			}
		}
	}
}
int main(){
	seive();
	int t; cin >> t;
	while(t--){
		long long a; cin >> a;
		long long sum = sqrt(a);
		if(sum * sum == a && isprime[sum] == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
