//#include <bits/stdc++.h>
//#define ii pair<char, int>
//#define ll long long
//using namespace std;
//
//
//int main(){
//	map <char, int> mp;
//	int cnt = 1;
//	for(char ai = 'a'; ai <= 'z'; ai++){
//		mp[ai] = cnt;
//		cnt++;
//	}
//	string s = "logic";
//	cout << mp[s[0]] << " " << mp[s[s.size() - 1]] << endl;
////	for(auto it : mp) cout << it.first << " " << it.second << endl;
//    return 0;
//}

// C++ program to illustrate nested-if statement
#include <bits/stdc++.h>
using namespace std;

int main() {
	int time = 22;
	if (time < 10) cout << "Good morning.";
	else if (time < 20) cout << "Good day.";
	else cout << "Good evening.";
	return 0;
}

