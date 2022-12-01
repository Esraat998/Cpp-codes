#include <bits/stdc++.h>
#define re return 0

using namespace std;

bool cmp(pair <char, int> a, pair <char, int> b){
	if(a.second != b.second) return a.second > b.second;
	else return a.first < b.first;
}

int main(){
	string s;
	cin >> s;
	int n = s.size();
	map <char, int> mp;
	vector <pair <char, int> > v(n);
	sort(s.begin(), s.end());
	for(int i = 0; i < n; i++){
		mp[s[i]]++;
	}
	for(int i = 0; i < n; i++){
		v[i].first = s[i];
		v[i].second = mp[s[i]];
	}
	sort(v.begin(), v.end(), cmp);
	cout << v[0].first << endl;
	re;
}


