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
		int a, b, m = 0;
		cin >> a >> b;
		for(int i = 1; i <= 200; i += 4){
			if(a + b + 1 == i || a + b + 1 == i + 1){
				m = 1; break;
			}
			else{
				m = 2; break;
			}
		}
		if(m == 1) cout << "Alice" << endl;
		else cout << "Bob" << endl;
	}
	re;
}

