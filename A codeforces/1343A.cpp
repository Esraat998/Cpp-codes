#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, sum = 1, ans = 0;
		cin >> n;

		for(long long i = 1; i < n; i++){
			sum += pow(2, i);
			if(n % sum == 0){
				ans = n / sum; break;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
