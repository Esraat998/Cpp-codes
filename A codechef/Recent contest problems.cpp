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
		ll n;
		cin >> n;
		vector <string> v;
		int l = 0, s = 0;
		for(ll i = 0; i < n; i++){
			string x;
			cin >> x;
			v.push_back(x);
		}
		for(int i = 0; i < n; i++){
			if(v[i] == "START38") s++;
			else l++;
		}
		cout << s << " " << l << endl;
	}
	re;
}

