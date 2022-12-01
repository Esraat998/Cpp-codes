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
		int a, b;
		cin >> a >> b;
		int sum1 = 0, sum2 = 0;
		sum1 = (500 - (a * 2)) + (1000 - (a + b) * 4);
		sum2 = (500 - (a + b) * 2) + (1000 - (b * 4));
		cout << max(sum1, sum2) << endl;
	}
	re;
}

