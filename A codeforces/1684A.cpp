#include <bits/stdc++.h>
#define pair pair<int, int>
#define ll long long
#define st sort(v.begin(), v.end())
#define rev reverse(v.begin(), v.end())
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define re return 0

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int sz = s.size();
		if(sz == 2) cout << s[1] << endl;
		else{
			sort(s.begin(), s.end());
			cout << s[0] << endl;
		}
	}
	re;
}

