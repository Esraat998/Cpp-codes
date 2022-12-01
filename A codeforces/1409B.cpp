#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll aa(ll a, ll b, ll x, ll y, ll n){
        ll d1 = a - x;
        ll d2 = b - y;
        ll c1 = min(d1, n);
        a -= c1;
        n -= c1;
        ll c2 = min(d2, n);
        b -= c2;
        n -= c2;
        ll ans = a * b;
        return ans;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll a, b, x, y, n;
        cin >>a >> b >> x >> y >> n;
        cout << min(aa(a, b, x, y, n), aa(b, a, y, x, n)) << endl;

    }
    return 0;
}
