#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, i = 0;
	cin >> n >> m;
	while(n){
		i++;
		n--;
		if(i % m == 0) i++;
	}
	cout << i << endl;
	return 0;
}
