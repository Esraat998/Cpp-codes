#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
//	bool is_prime = true;
///prime check
//	for(int i = 2; i * i < n; i++){
//		if(n % 2 == 0) is_prime = false;
//	}
//	cout << is_prime << endl;

	///prime_factor
	vector <int> prime_factor;
	for(int i = 2; i * i < n; i++){
		while(n % i == 0){
			prime_factor.push_back(i);
			n /= i;
		}
	}
	if(n > 1) prime_factor.push_back(n);
	for(int prime : prime_factor) cout << prime << " ";
	cout << endl;
	return 0;
}
