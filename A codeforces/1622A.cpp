#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b, c;
		cin >> a >> b >> c;
		if(a != b && b != c && a != c){
			if(a > b && a > c){
				if(b + c == a) cout << "YES" << endl;
				else cout << "NO" << endl;
			}
			else if(b > a && b > c){
				if(a + c == b) cout << "YES" << endl;
				else cout << "NO" << endl;
			}
			else if(c > a && c > b){
				if(a + b == c) cout << "YES" << endl;
				else cout << "NO" << endl;
			}
		}
		else if(a == b && c % 2 == 0) cout << "YES" << endl;
		else if(a == c && b % 2 == 0) cout << "YES" << endl;
		else if(b == c && a % 2 == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
