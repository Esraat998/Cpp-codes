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
	int t;
	cin >> t;
	while(t--){
		int n, m, sum = 0;
		cin >> n >> m;
		vector <int> v;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			sum += x;
			v.push_back(x);
		}
		if(m > sum) cout << 0 << endl;
		else cout << sum - m << endl;
	}
	re;
}

