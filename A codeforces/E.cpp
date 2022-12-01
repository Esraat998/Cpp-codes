///
/// Time complexity O(n)

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

void primefact(ll n){
vector <ll> prime;
ll x = n;
bool arr[n + 10];
for(ll i = 4; i < n; i += 2){
	arr[i] = true;
}
for(ll i = 3; i < sqrt(n); i += 2){
	if(arr[i] == 0){
		for(ll j = i * i; j < n; j += i){
			arr[j] = true;
		}
	}
}
for(ll i = 2; i < n; i++){
	if(arr[i] == 0) prime.push_back(i);
}

vector<ll >ans;
ll sqrtn = sqrt(n);
for(ll i = 0; prime[i] <= sqrtn, i<prime.size(); i++){
	while(n % prime[i] == 0){
		n = n/prime[i];
		ans.push_back(prime[i]);
	}
	sqrtn = sqrt(n);
}
if(n != 1)ans.push_back(n);

	ans.clear();
	prime.clear();

}
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
    if(n != 1)ans.pb(n);
    int odd = 0, even = 0;
	for(int i = 0; i < ans.size(); i++){
		if(ans[i] % 2 == 0) even++;
		else odd++;
	}
	if(even > odd) cout << "Psycho Number" << endl;
	else cout << "Ordinary Number" << endl;
    ans.clear();
    prime.clear();
    }
    int main(){

    ll int n;
    while(cin>>n &&n!=0){

    if(n>0)primefact(n);
    else {
            primefactneg(abs(n));
          }
    }
            return 0;
  }


