#include <bits/stdc++.h>
#define ii pair<int, int>
using namespace std;

bool cmp(ii a, ii b){
	if(a.first < b.first) return true;
	else if(a.first == b.first && a.second > b.second) return true;
	else return false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector <ii> v(n);
		for(int i = 0; i < n; i++){
			scanf("%d %d", &v[i].first, &v[i].second);
		}
		sort(v.begin(), v.end(), cmp);
		for(int i = 0; i < n; i++){
			printf("%d %d\n", v[i].first, v[i].second);
		}
	}
	return 0;
}
