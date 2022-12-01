#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	string s;
	cin >> s;
	int n;
	cin >> n;
	if(s == "front" && n == 1) cout << "L" << endl;
	if(s == "front" && n == 2) cout << "R" << endl;
	if(s == "back" && n == 1) cout << "R" << endl;
	if(s == "back" && n == 2) cout << "L" << endl;
	return 0;
}

