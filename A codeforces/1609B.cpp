#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, q, cnt = 0;
	cin >> n >> q;
	string s;
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c') cnt++;
	}
	while(q--){
		int pos;
		char c;
		cin >> pos >> c;
		if(s[pos - 1] == 'a' && s[pos] == 'b' && s[pos - 2] == 'c') cnt--;
		else if(s[pos - 3] == 'a' && s[pos - 2] == 'b' && s[pos - 1] == 'c') cnt--;
        else if(s[pos - 2] == 'a' && s[pos - 1] == 'b' && s[pos] == 'c') cnt--;

		s[pos - 1] = c;
        if(s[pos - 1] == 'a' && s[pos] == 'b' && s[pos + 1] == 'c') cnt++;
        else if(s[pos - 3] == 'a' && s[pos - 2] == 'b' && s[pos - 1] == 'c') cnt++;
        else if(s[pos - 2] == 'a' && s[pos - 1] == 'b' && s[pos] == 'c') cnt++;
        cout << cnt << endl;
	}
	return 0;
}

