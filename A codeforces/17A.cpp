#include<bits/stdc++.h>
using namespace std;

const int n = 1e7;
vector <bool> isPrime(n, 1);
vector <int> vv;

int main(){

    isPrime[0] = isPrime[1] = 0;
    for(int j=2*2; j*j<n; j+=2){
        isPrime[j] = false;
    }

    for(int i=2; i<=n; i++){
        if(isPrime[i]==true){
            for(int j=2*i; j<n; j+=i){
                isPrime[j] = false;
            }
        }
    }
    int a, b; cin >> a >> b;
    for(int i = 2; i < n; i++){
        if(isPrime[i] == 1) vv.push_back(i);
    }
    int sum = 0, cnt = 0;
    for(int i = 0; i < vv.size() - 1; i++){
        sum = vv[i] + vv[i + 1] + 1;
        if(sum <= a && isPrime[sum] == 1) cnt++;
    }
    if(cnt >= b) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
