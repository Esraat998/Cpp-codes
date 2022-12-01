#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector <int> v;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		v.push_back(a);
	}
	int cnt1 = 0, cnt2 = 0;
	for(int i = 0; i < n; i++){
		if(v[i] % 2 == 0) cnt1++;
		else cnt2++;
	}
	for(int i = 0; i < n; i++){
		if(v[i] % 2 == 0){
			if(cnt1 == 1) cout << i + 1 << endl;
		}
		else{
			if(cnt2 == 1) cout << i + 1 << endl;
		}
	}
	return 0;
}
