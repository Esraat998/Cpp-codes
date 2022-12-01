#include <bits/stdc++.h>
using namespace std;

int main(){
	int x, need = 1;
	cin >> x;
	while(x > 1){
		if(x % 2 != 0){
			need++;
			x--;
		}
		else{
			x = x / 2;
		}
	}
	cout << need << endl;
	return 0;
}
