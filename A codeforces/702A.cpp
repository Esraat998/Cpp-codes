#include <bits/stdc++.h>
using namespace std;

int main(){
	vector <int> v;
	int n, max = 0, cnt = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	for(int i = 0; i < n; i++){
		if(v[i] > v[i-1]){
			cnt++;
		}
		else{
			cnt = 1;
		}
		if(cnt > max) max = cnt;
	}
	cout << max << endl;
	return 0;
}
