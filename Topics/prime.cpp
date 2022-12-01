#include <bits/stdc++.h>
using namespace std;

void isprime(int n){
	int mark = 1;
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0){
			mark = 0;
			break;
		}
	}
	if(mark == 1) cout << n << " ";
}

int main(){
	int n;
	cin >> n;
	for(int i = 2; i <= n; i++){
		isprime(i);
	}
	return 0;
}
