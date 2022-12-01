#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, sum = 0, sum2 = 0, cnt = 0, cnt2 = 0;
		cin >> n;
		vector <int> v;
		if(n % 4 != 0) cout << "NO" << endl;
		else{
			cout << "YES" << endl;
			for(int i = 1; i <= n; i++){
				if(i % 2 == 0){
					sum += i;
					v.push_back(i);
					cnt++;
				}
				if(cnt == n / 2) break;
			}
			for(int i = 1; ; i++){
				if(i % 2 != 0){
					sum2 += i;
					cnt2++;
					v.push_back(i);
				}
				if(cnt2 == (n/ 2) - 1) break;
			}
			int push = sum - sum2;
			v.push_back(push);
			for(int i = 0; i < n; i++){
				cout << v[i] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
