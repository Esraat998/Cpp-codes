#include <bits/stdc++.h>
using namespace std;

int main(){
	vector <int> v;
	int t, cnt = 0, cnt2 = 0, ans = 0;
	cin >> t;
	for(int i = 0; i < t; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	for(int i = 0; i < t; i++){
		cnt2 += v[i];
	}
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	for(int i = 0; i < t; i++){
		cnt += v[i];
		cnt2 -= v[i];
		if(cnt > cnt2){
			ans = i + 1; break;
		}
	}
	cout << ans << endl;
	return 0;
}
