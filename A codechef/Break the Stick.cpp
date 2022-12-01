#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, check = 0, doll = 0;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++) cin >> arr[i];
		map <int, int> mp;
		for(int i = 0; i < n; i++) mp[arr[i]]++;
		for(int i = 0; i < n; i++){
			if(mp[arr[i]] % 2 != 0){
				doll = arr[i]; break;
			}
		}
		cout << doll << endl;
	}
	return 0;
}
