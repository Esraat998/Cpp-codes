#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string s, ss;
	cin >> s >> ss;
	if (s.size() < ss.size()) s = string(ss.size() - s.size(), '0') + s;
	else if (s.size() > ss.size()) ss = string(s.size() - ss.size(), '0') + ss;
	if (s < ss) cout << "<" << endl;
	else if (s > ss) cout << ">" << endl;
	else cout << "=" << endl;

	return 0;
}
