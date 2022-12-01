#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		 int n,m,sr,sc,rr,rc;
		cin >> n >> m >> sr >> sc >> rr >> rc;
		int dc = 1,dr = 1;
		int cnt = 0;
		while(sr != rr && sc != rc){
			if(sr+dr > n || sr+dr < 1) dr *= -1;
			if(sc+dc > m || sc+dc < 1) dc *= -1;
			sr+=dr;
			sc+=dc;
			cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}
