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
		int n, a = 0, b = 0;
		cin >> n;
		if(n % 3 == 1) cout << (n / 3) << " " << (n / 3) + 2 << " " << (n / 3) - 1 << endl;
		else if(n % 3 == 0) cout << (n / 3)<< " " << (n / 3) + 1 << " " << (n / 3) - 1 << endl;
		else if(n % 3 == 2) cout << (n / 3) + 1 << " " << (n / 3) + 2 << " " << (n / 3) - 1 << endl;
	}
	re;
}
