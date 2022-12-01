#include <bits/stdc++.h>
#define pair pair<int, int>
using namespace std;

int main(){
	vector <pair> v;
	int s, n, cnt = 0;
	cin >> s >> n;
	for(int i = 0; i < n; i++){
		int x, y;
		cin >> x >> y;
		v.push_back(pair(x, y));
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++){
		if(v[i].first < s){
			s += v[i].second;
			cnt++;
		}
	}
	if(cnt >= n) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
