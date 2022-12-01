#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, flag = 0;
		cin >> n;
		string s, a = "", b = "";
		cin >> s;
		for(int i = 0; i < n; i++){
			if(s[i] == '0'){
				a += '0', b += '0';
			}

			if(flag == 0){
				if(s[i] == '2'){
					a += '1', b += '1';
				}
				if(s[i] == '1'){
					a += '1', b += '0';
					flag = 1;
				}
			}
			else{
				if(s[i] == '2'){
					a += '0', b += '2';
				}
				if(s[i] == '1'){
					a += '0', b += '1';
					flag = 1;
				}
			}
		}
		cout << a << endl;
		cout << b << endl;
	}
	return 0;
}
