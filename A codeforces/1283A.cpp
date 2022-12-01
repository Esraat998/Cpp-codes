#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		int hour = a * 60;
		int minute = hour + b;
		int total = 24 * 60;
		cout << total - minute << endl;
	}
	return 0;
}
