#include <bits/stdc++.h>
#define ii pair<int, int>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector < ii > v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i].first;
		cin >> v[i].second;
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < n; i++){
		cout << v[i].first << " " << v[i].second << endl;
	}
}
