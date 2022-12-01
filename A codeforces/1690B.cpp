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
		int n, mark = 0;
		cin >> n;
		vector <int> v, vv;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			v.push_back(x);
		}
		for(int i = 0; i < n; i++){
			int y;
			cin >> y;
			v.push_back(y);
		}
		for(int i = 0; i < n; i++){
			if(v[i] > vv[i]) {
				mark = 1;
				break;
			}
		}
		if(mark == 0) yes;
		else no;
	}
	re;
}

