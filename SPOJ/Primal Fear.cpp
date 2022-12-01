#include<bits/stdc++.h>
using namespace std;

void seive(int n){
	vector <int> v;
	vector <bool> isPrime(n, 1);

    for(int j=2*2; j*j<n; j+=2){
        isPrime[j] = false;
    }
	isPrime[0] = 2;
	isPrime[1] = 3;
    for(int i=2; i <= n; i++){
        if(isPrime[i]==true){
			v.push_back(i);
            for(int j=2*i; j<n; j+=i){
                isPrime[j] = false;
            }
        }
    }
   cout << v.size() << endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin >> n;
        seive(n);
    }
	return 0;
}
