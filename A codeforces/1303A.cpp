#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int l = 0;
        while (l < s.length() && s[l] != '1') l++;
        if (l >= s.length()) cout << 0 << endl;
        else {
            int r = s.length() - 1;
            while (s[r] != '1') r--;
            int res = 0;
            for (int i = l; i <= r; i++)
                if (s[i] == '0') res++;
            cout << res << endl;
        }
	}
	return 0;
}
