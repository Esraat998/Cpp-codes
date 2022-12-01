#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long a, b;
		cin >> a >> b;
		if(a < b){
			 cout << "NO" << endl; continue;
		}
		if(a % 2 == 0 && a >= b){
			if(b % 2 == 0){
				cout << "YES" << endl;
				b--;
				while(b--){
					cout << 1 << " ";
					a--;
				}
				cout << a << endl;
			}
			else{
				if(a / 2 >= b){
					cout << "YES" << endl;
					b--;
					while(b--){
						cout << 2 << " ";
						a -= 2;
					}
					cout << a << endl;
				}
				else cout << "NO" << endl;
			}
		}
		else{
			if(b % 2 == 0) cout << "NO" << endl;
			else{
				cout << "YES" << endl;
				b--;
				while(b--){
					cout << 1 << " ";
					a--;
				}
				cout << a << endl;
			}
		}
	}
	return 0;
}

