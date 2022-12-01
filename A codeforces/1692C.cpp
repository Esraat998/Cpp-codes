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
		char arr[8 + 5][8 + 5];
		int a = 0, b = 0, check = 0;
		for(int i = 0; i < 4; i++){
			for(int j = 0; j < 4; j++){
				cin >> arr[i][j];
			}
		}
		for(int i = 1; i < 4 - 1; i++){
			for(int j = 1; j < 4 - 1; j++){
				if(arr[i][j] == '#'){
					if(arr[i - 1][j] == '#' && arr[i][j - 1] == '#' && arr[i + 1][j] == '#' && arr[i][j + 1] == '#'){
							check = 1;
							a = i, b = j; break;
					}
				}

			}

		}
		if(check == 1) cout << a + 1 << " " << b + 1 << endl;
	}
	re;
}
