#include <bits/stdc++.h>
#define pair pair<int, int>
#define ll long long
#define sort sort(v.begin(), v.end())
#define rev reverse(v.begin(), v.end())
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define re return 0

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n, cnt0 = 0, cnt1 = 0, num = 0;
		cin >> n;
		vector <int> v;
		for(int i = 0; i < n; i++){
			ll x;
			cin >> x;
			v.push_back(x);
		}
		sort;
		for(int i = 0; i < n; i++){
			if(v[i] == 0) cnt0++;
			else num++;
		}
		for(int i = 0; i < n - 1; i++){
			if(v[i] == v[i + 1] && v[i] != 0) cnt1++;
		}
		if(cnt0 == n){
			cout << 0 << endl; continue;
		}
		else if(cnt0 > 0){
			 cout << num << endl; continue;
		}
		else if(cnt1 > 0) {
			cout << n << endl; continue;
		}
		else cout << n + 1 << endl;
	}
	re;
}

