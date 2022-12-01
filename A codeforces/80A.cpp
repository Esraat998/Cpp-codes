#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, index = 0;
	cin >> n >> m;
	vector <int> v;
	v.push_back(2);
	v.push_back(3);
	v.push_back(5);
	for(int i = 2; i < 48; i++){
		if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0){
			v.push_back(i);
		}
	}
	for(int i = 0; i < v.size(); i++){
		if(v[i] == n) index = i;
	}
//	for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
	if(v[index + 1] == m) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
