#include <bits/stdc++.h>
using namespace std;
const int a = 1e9;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		vector <int> v(a);
		for(int i = 1; i <= a; i++){
			if(i % 3 != 0) v.push_back(i);
		}
		int low = 1, mid, high = a;
		if(low == k){
			cout << v[low] << endl; continue;
		}
		else if(high == k){
			cout << v[high] << endl; continue;
		}
		for(int i = 1; i <= sqrt(a); i++){
			mid = (low + high) / 2;
			if(mid == k){
				cout << v[mid] << endl; break;
			}
			else if(k < mid) high = mid - 1;
			else low = mid + 1;
		}
	}
	return 0;
}
