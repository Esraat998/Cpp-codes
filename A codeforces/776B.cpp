#include <bits/stdc++.h>
using namespace std;

const int n = 1e7;
vector <int> isprime(n, 1);

void seive(){
	isprime[0] = isprime[1] = 2;
	for(int i = 2 * 2; i * i < n; i += 2){
		isprime[i] = 2;
	}
	for(int i = 2; i <= n; i++){
		if(isprime[i] == 1){
			for(int j = 2 * i; j < n; j += i){
				isprime[j] = 2;
			}
		}
	}
}

int main(){
	seive();
	int x; cin >> x;
	if(x == 1){
		cout << 1 << endl;
		cout << 1 << endl;
	}
	else if(x == 2){
		cout << 1 << endl;
		cout << 1 << " " << 1 << endl;
	}
	else if(x == 3){
		cout << 2 << endl;
		cout << 1 << " " << 1 << " " << 2 << endl;
	}
	else{
		cout << 2 << endl;
		for(int i = 2; i <= x + 1; i++){
			cout << isprime[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
