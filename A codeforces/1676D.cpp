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
		int n, m, sum = 0, mx = INT_MIN;
		cin >> n >> m;
		int arr[n + 1][m + 1];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> arr[i][j];
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				int x = i, y = j;
				sum += arr[i][j];
				 while(x - 1 >= 0 && y - 1 >= 0){
                    sum += arr[x - 1][y - 1];
                    --x;
                    --y;
                }
                x = i, y = j;
                while(x + 1 < n && y + 1 < m){
                    sum += arr[x + 1][y + 1];
                    ++x;
                    ++y;
                }
                x = i, y = j;
                while(x + 1 < n && y - 1 >= 0){
                    sum += arr[x + 1][y - 1];
                    ++x;
                    --y;
                }
                x = i, y = j;
                while(x - 1 >= 0 && y + 1 < m){
                    sum += arr[x - 1][y + 1];
                    --x;
                    ++y;
                }
				mx = max(mx, sum);
				sum = 0;
			}
		}
		cout << mx << endl;
	}
	re;
}

