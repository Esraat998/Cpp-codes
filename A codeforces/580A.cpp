#include <bits/stdc++.h>
using namespace std;

int main(){
	vector <int> v;
	int t, cnt = 1, maximum = 0;
	cin >> t;
	for(int i = 0; i < t; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	for(int i = 0; i < t; i++){
		if(v[i] >= v[i - 1]){
			cnt++;
		}
		else cnt = 1;
		maximum = max(maximum, cnt);
	}
	cout << maximum << endl;
	return 0;
}
