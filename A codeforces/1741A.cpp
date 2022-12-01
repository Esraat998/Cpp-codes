#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string a, b; cin >> a >> b;
		int acnt = 0, bcnt = 0;
		if(a == b) cout << "=" << endl;
		else if(a > b) cout << "<" << endl;
		else cout << ">" << endl;
		if(a.size() == 1 && b.size() > 1 && b[b.size() - 1] == 'L') cout << "<" << endl;
		if(a.size() == 1 && b.size() > 1 && b[b.size() - 1] == 'S') cout << ">" << endl;
		if(b.size() == 1 && a.size() > 1 && a[a.size() - 1] == 'L') cout << ">" << endl;
		if(b.size() == 1 && a.size() > 1 && a[a.size() - 1] == 'S') cout << "<" << endl;
		else{
			if(a.size() > 1){
				if(a[a.size() - 1] == 'S'){
					for(int i = 0; i < a.size() - 1; i++){
						if(a[i] == 'X') acnt--;
					}
				}
				else{
					for(int i = 0; i < a.size() - 1; i++){
						if(a[i] == 'X') acnt++;
					}
				}
			}
			if(b.size() > 0){
				if(b[b.size() - 1] == 'S'){
					for(int i = 0; i < b.size() - 1; i++){
						if(b[i] == 'X') bcnt--;
					}
				}
				else{
					for(int i = 0; i < b.size() - 1; i++){
						if(a[i] == 'X') bcnt++;
					}
				}
			}
			if(acnt > bcnt) cout << ">" << endl;
			else if(acnt < bcnt) cout << "<" << endl;
		}
	}
	return 0;
}
