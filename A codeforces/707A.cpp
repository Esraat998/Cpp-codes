#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, cnt=0;
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0 ; j < m; j++){
			string a;
			cin >> a;
			if(a == "C" || a == "M" || a == "Y"){
				cnt++;
			}
		}
	}
	if(cnt > 0){
		cout << "#Color" << endl;
	}
	else{
		cout << "#Black&White" << endl;
	}
	return 0;
}
