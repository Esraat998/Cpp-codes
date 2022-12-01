#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin >> t;
    while(t--){
    ll a, b, c;
    cin >> a >> b >> c;
    if(a < c) cout << 1 << " ";
    else cout << -1 << endl;
    if(c < (b * a)) cout << b << " ";
    else cout << -1 << endl;
    }
    return 0;
}

