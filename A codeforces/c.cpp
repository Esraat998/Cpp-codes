#include <bits/stdc++.h>
using namespace std;

int main(){
	vector <int> v;
	vector <int> vv;
	vector <int> a;
	int n, m, cnt = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	cin >> m;
	for(int i = 0; i < m; i++){
		int y;
		cin >> y;
		vv.push_back(y);
	}
	int len = max(v.size(), vv.size());
	int len1 = v.size();
	int len2 = vv.size();
	int cnt1 = abs(len1 - len2);
	for(int i = 0; i < len; i++){
		if(v[i] != vv[i]){
			a.push_back(vv[i]);
			cnt++;
		}
		if(cnt == cnt1) break;
	}
	sort(a.begin(), a.end());
	for(int i = 0; i < a.size(); i++){
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
