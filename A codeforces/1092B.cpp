#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int sum = 0;
	vector <int> v(n);
	vector < pair <int, int> > vp(n/2);
	for(int i = 0; i < n; i++) cin >> v[i];
	sort(v.begin(), v.end());
	int j = 0;
	for(int i = 0; i < (n / 2); i++){
		vp[i].first = v[j];
		vp[i].second = v[j + 1];
		j += 2;
	}
	for(int i = 0; i < n / 2; i++){
		sum += abs(vp[i].first - vp[i].second);
	}
	cout << sum << endl;
	return 0;
}
