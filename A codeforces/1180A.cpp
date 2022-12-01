#include <bits/stdc++.h>
using namespace std;

int main(){
	int p = 4, temp = 1, a;
	cin >> a; a--;
	while(a--){
		temp += p;
		p += 4;
	}
	cout << temp << endl;
	return 0;
}
