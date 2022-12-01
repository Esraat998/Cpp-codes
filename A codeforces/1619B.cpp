#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		set <long long> s;
		long long n, a = 0, b = 0;
		cin >> n;
		for(long long i = 1; i <= sqrt(n); i++){
			a = i * i;
			s.insert(a);
			b = i * i * i;
			if(b <= n) s.insert(b);
		}
		cout << s.size() << endl;
	}
	return 0;
}

