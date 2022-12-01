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
		set <int> m;
		int n; cin >> n;
		string s, ss;
		cin >> s >> ss;
		for(int i = 0; i < n; i++){
			if(s[i] != ss[i]) m.insert(ss[i]);
		}
		cout << m.size() << endl;
	}
	re;
}
