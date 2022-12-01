#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

    void primefactneg(ll n){
        vector<ll>prime;
       ll x=n;
       bool arr[n+10];
       for(ll i=4;i<n;i+=2){
        arr[i]=true;
       }
       for(ll i=3;i<sqrt(n);i+=2){
        if(arr[i]==0){
            for(ll j=i*i;j<n;j+=i){
                arr[j]=true;
               }
           }
       }
    for(ll i=2;i<sqrt(n);i++){
        if(arr[i]==0)prime.pb(i);
       }

    vector<ll >ans;
    ll sqrtn=sqrt(n);
    for(ll i=0;prime[i]<=sqrtn,i<prime.size();i++){
        while(n%prime[i]==0){
            n=n/prime[i];
            ans.pb(prime[i]);
        }sqrtn=sqrt(n);
    }
    int od = 0, ev = 0;
    for(int i = 0; i <= n; i++){
		int cnt = 0;
		while(n % ans[i] == 0){
			cnt++;
			n /= ans[i];
		}
		if(cnt % 2 == 0) ev++;
		else od++;
    }
    if(ev > od) cout << "Psycho Number" << endl;
    else cout << "Ordinary Number" << endl;

    }
    int main(){

	ll t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		primefactneg(abs(n));
	}
            return 0;
  }
