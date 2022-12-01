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
		ll n, m;
		cin >> n >> m;
		char arr[n + 1][m + 1];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> arr[i][j];
			}
		}
		int a = n, b = m;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(arr[i][j] == 'R'){
					a = min(i, a);
					b = min(j, b);
				}
			}
		}
		if(arr[a][b] == 'R') yes;
		else no;
	}
	re;
}

