#include <bits/stdc++.h>
using namespace std;

int main(){
	string a, b;
	int ans = 0;
	cin >> a >> b;
	if(a.size() == 2){
		if(a[1] != b[1]) ans++;
		if(a[2] != b[2]) ans++;
		if(ans == 2) cout << ans - 1 << endl;
		else cout << ans;
	}
	else{
		for(int i = 0; i < a.size(); i++){
			if(a[i] != b[i]) ans++;
		}
		cout << ans << endl;
	}
	return 0;
}
