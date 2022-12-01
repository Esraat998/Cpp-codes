#include <bits/stdc++.h>
#define pair pair<int, int>
#define ll long long
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
		vector <int> va,vb;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			va.push_back(x);
		}
		int m, alice  = 0, bob = 0;
		cin >> m;
		for(int i = 0; i < m; i++){
			int x;
			cin >> x;
			vb.push_back(x);
		}
		sort(va.begin(), va.end());
		sort(vb.begin(), vb.end());
		int a = va.size(), b = vb.size();
		if(va[a - 1] < vb[b - 1]){
			cout << "Bob" << endl;
			cout << "Bob" << endl;
		}
		else if(va[a - 1] == vb[b - 1]){
			cout << "Alice" << endl;
			cout << "Bob" << endl;
		}
		else{
			cout << "Alice" << endl;
			cout << "Alice" << endl;
		}
	}
	re;
}

