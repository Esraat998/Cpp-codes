#include <bits/stdc++.h>
#define ll long long
#define st sort(v.begin(), v.end())
#define rev reverse(v.begin(), v.end())
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define re return 0

using namespace std;

bool cmp(pair <string, int> a, pair <string, int> b){
	if(a.second != b.second) return a.second > b.second;
	else return a.first < b.first;
}

int main(){
		int n;
		cin >> n;
		vector <pair <string, int> > v(n);
		for(int i = 0; i < n; i++){
			cin >> v[i].first >> v[i].second;
		}
		sort(v.begin(), v.end(), cmp);
//		reverse(v.begin(), v,end());
		for(int i = 0; i < n; i++){
			cout << v[i].first << " " << v[i].second << endl;
		}
	re;
}

