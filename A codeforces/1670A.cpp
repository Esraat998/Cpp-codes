#include <bits/stdc++.h>
#define pair pair<int, int>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define re return 0

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n, cnt = 0, mark = 0;
		cin >> n;
		vector <int> v;
		for(int i = 0; i < n; i++){
			ll x;
			cin >> x;
			v.push_back(x);
			if(v[i] < 0){
				v[i] = -v[i];
				cnt++;
			}
		}
		for(int i = 0; i < cnt; i++) v[i] = -v[i];
		for(int i = 0; i < n - 1; i++){
			if(v[i] > v[i + 1]) mark = 1;
		}
		if(mark == 1) no;
		else yes;
	}
	return 0;
}
