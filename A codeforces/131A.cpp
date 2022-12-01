#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int cnt = 0;
	int len = s.size();
	for(int i = 0; i < len; i++){
		if(isupper(s[i])) cnt++;
	}
    if(cnt == len || cnt == len - 1 && islower(s[0]))
        for(int i = 0;i < len; i++){
			if(isupper(s[i])){
				s[i] = tolower(s[i]);
            }
            else  s[i]=toupper(s[i]);
	}
    cout << s << endl;
    return 0;
}
