#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int t, n, flag = 0;
	cin >> t >> n;
	long long int sum = n;
	while(t--){
		string s; int a;
		cin >> s >> a;
		if(s == "+") sum += a;
		else if(s == "-"){
			if(sum >= a){
				sum -= a;
			}
			else flag++;
		}
	}
	cout << sum << " " << flag << endl;
	return 0;
}
