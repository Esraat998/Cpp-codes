// Problem: A. Yes-Yes?
#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
using namespace std;

int main(){
	ll t; cin >> t;
	while(t--){
        string s, ss = "";
        cin >> s;
        for(ll i = 0; i < 55; i++) ss += "Yes";
        int x = ss.find(s);
        if(x < 0){
            //cout << x << endl;
            no;
        }
        else{
            //cout << x << endl;
            yes;
        }
	}
	return 0;
}





