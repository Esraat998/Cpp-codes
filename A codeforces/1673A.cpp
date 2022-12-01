#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		char ss;
		cin >> s;
		ll sum = 0, bo = 0;
		if(s.size() == 1) cout << "Bob " << (int)s[0] - 96 << endl;
		else if(s.size() % 2 == 0){
			for(int i = 0; i < s.size(); i++){
				sum += (int)s[i] - 96;
			}
			cout << "Alice " << sum << endl;
		}
		else if(s.size() % 2 != 0){
			if(s[0] >= s[s.size() - 1]){
				for(int i = 0; i < s.size() - 1; i++){
					sum += (int)s[i] - 96;
				}
				cout << "Alice " << sum - ((int)s[s.size() - 1] - 96) << endl;

			}
			else{
				bo = (int)s[0] - 96;
				for(int i = 1; i < s.size(); i++){
					sum += (int)s[i] - 96;
				}
				cout << "Alice " << sum - ((int)s[0] - 96) << endl;

			}
		}

	}
	return 0;
}
