#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	vector <int> v(t);
	vector <int> v1(t);
	for(int i = 0; i < t; i++){
		cin >> v[i];
		v1[i] = v[i];
	}

	sort(v1.begin(), v1.end());
	int cnt = 0;
	for(int i = 0; i < t; i++){
		if(v1[i] != v[i]) cnt++;
	}
	//cout << cnt << endl;
	if(cnt <= 2) cout << "YES" << endl;
	else{
		 cout << "NO" << endl;
	}
	return 0;
}
