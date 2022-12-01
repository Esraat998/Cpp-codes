#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, marker = 0;
	string s, b[1000 + 2];
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> s;
        if(s[0] == 'O' && s[1] == 'O' && marker == 0) {
            s[0] = '+';
            s[1] = '+';
            marker = 1;
        }
		else if(s[3] == 'O' && s[4] == 'O'&& marker == 0){
            s[3] = '+';
            s[4] = '+';
            marker = 1;
        }
        b[i] = s;
    }
    if(marker == 1) {
        cout << "YES" << endl;
        for(int i = 0; i < t; i++){
            cout << b[i] << endl;
        }
    } else{
        cout << "NO" << endl;
    }
    return 0;
}
