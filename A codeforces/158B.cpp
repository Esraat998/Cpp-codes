#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, sum = 0, cnt[5] = {0};
	cin >> n;
	while(n--){
		int x;
		cin >> x;
		cnt[x] += 1;
	}
	int tot = cnt[4] + cnt[3] + cnt[2] / 2;
	cnt[1] -= cnt[3];
	if(cnt[2] % 2 == 1){
		tot += 1;
		cnt[1] -= 2;
	}
	if(cnt[1] > 0){
		tot += (cnt[1] + 3) / 4;
	}
	cout << tot << endl;
	return 0;
}
