#include <bits/stdc++.h>
using namespace std;

int c, m, x;

int binarysearch(){
	if(m < c) swap(m, c);
	if(c * 2 <= m) return c;
	else{
		int lo = 1	, hi = 1e9;
		int an = 0;
		while(lo <= hi){
			int mid = (lo + hi) / 2;
			int cc = c - mid;
			int mm = m - (mid * 2);
			if(mm < 0 || cc < 0){
				hi = mid - 1;
			}
			else if(cc <= mm){
				an = mid;
				lo = mid + 1;
			}
			else hi = mid - 1;
		}
		c = c - an;
		m = m - (an * 2);
		an += (c + m) / 3;
		return an;
	}
}
int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> c >> m >> x;
		int ans = min(c, min(m, x));
		c -= ans;
		m -= ans;
		if(c == 0 || m == 0) cout << ans << endl;
		else{
			ans += binarysearch();
			cout << ans << endl;
		}
	}
	return 0;
}

