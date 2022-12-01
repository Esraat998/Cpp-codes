#include <bits/stdc++.h>
#define pair pair<int, int>
#define ll long long
#define st sort(v.begin(), v.end())
#define rev reverse(v.begin(), v.end())
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define re return 0

using namespace std;

int main(){
	int n;
	cin >> n;
	vector <int> v;
	map <int, int> mp;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		v.push_back(x);
		mp[x]++;
	}
	int mx = INT_MIN;
	for(int i = 0; i < n; i++){
		mx = max(mx, mp[v[i]]);
	}
	cout << mx << endl;
	re;
}

