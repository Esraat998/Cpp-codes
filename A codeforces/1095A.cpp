#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	string s;
	cin >> s;
	int i = 0, j = 0;
	while(j < t){
		cout << s[j];
		i++;
		j = j + i;
	}
	return 0;
}
