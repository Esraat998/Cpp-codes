#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n, cnt = 0;
	cin >> n;
	int ar[n + 1];
	for(int i = 0; i < n; i++){
		cin >> ar[i];
		cnt += ar[i];
	}
	cout << cnt << endl;
	return 0;
}

