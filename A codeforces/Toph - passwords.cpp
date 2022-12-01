#include <bits/stdc++.h>
#define ii pair<int, int>
using namespace std;

int main(){
	string s;
	while(cin >> s){
		int x = 0, y = 0, z = 0, cnt = 0;
		for(int i = 0; i < s.size(); i++){
			if(s[i] >= 'A' && s[i] <= 'Z') x = 1;
			else if(s[i] >= 'a' && s[i] <= 'z') y = 1;
			else if(s[i] >= '0' && s[i] <= '9') z = 1;
			if(x == 1 && y == 1 && z == 1){
				cnt++;
				x = 0, y = 0, z = 0;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}

