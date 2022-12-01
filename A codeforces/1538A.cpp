#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		vector <int> v;
		int n;
		cin >> n;
		for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            v.push_back(a);
        }
        int mn = min_element(v.begin(),v.end()) - v.begin();
        mn++;
        int mx=max_element(v.begin(),v.end()) - v.begin();
        mx++;
        if(mn > mx) swap(mn, mx);
        cout << min(mx, min(n - mn + 1, mn + n - mx + 1)) << endl;
	}
	return 0;
}
