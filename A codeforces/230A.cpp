#include <bits/stdc++.h>
using namespace std;

int main(){
	int s, n, bonus = s, cnt = 0;
	cin >> s >> n;
	for(int i = 0; i < n; i++){
		int x, y;
		cin >> x >> y;
		if(bonus > x) {
			bonus += y;
			cnt++;
		}
		else{
			cnt = 0;
		}
	}
	if(cnt > 0) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
