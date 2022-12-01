#include <bits/stdc++.h>
#define pair pair<int, int>
#define ll long long
#define sort sort(v.begin(), v.end())
#define rev reverse(v.begin(), v.end())
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define re return 0

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, sum = 0, mark = 0;
		cin >> n;
		vector <int> v;
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			sum += x;
			v.push_back(x);
		}
		for(int i = 0; i < n; i++){
			double a = sum - v[i];
			double avg = a / (n - 1);
			if(avg == v[i]){
				mark = 1; break;
			}
		}
		if(mark == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	re;
}

