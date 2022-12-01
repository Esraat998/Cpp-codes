#include <bits/stdc++.h>
#define pair pair<int, int>
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define re return 0

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		double x, y;
		cin >> x >> y;
		double sum = x * 1.07;
		if(y > (int)sum) no;
		else yes;
	}
	return 0;
}


