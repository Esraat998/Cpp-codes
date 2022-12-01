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
	int n, q;
	cin >> n >> q;
	vector <int> v;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	st;
	rev;
	while(q--){
		int x, y;
		cin >> x >> y;
		vector <int> vv;
		for(int i = 0; i < x; i++){
			vv.push_back(v[i]);
		}
		int sum = 0;
		sort(vv.begin(), vv.end());
		for(int i = 0; i < y; i++){
			sum += vv[i];
		}
		cout << sum << endl;
	}
	re;
}

