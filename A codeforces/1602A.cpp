#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s, a, b;
		cin >> s;
		int mini = 0;
		for(int i = 1; i < s.size(); i++){
			if(s[i] < s[mini]) mini = i;
		}
		a = s[mini];
		for(int i = 0; i < s.size(); i++){
			if(i != mini) b += s[i];
		}
		cout << a << " " << b << endl;
	}
	return 0;
}
