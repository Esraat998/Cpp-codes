#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x = 1;
	cin >> n;
	string sarr[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	while(1){
		for(int i = 0; i < 5; i++){
			if(n > x){
				n -= x;
			}
			else{
				cout << sarr[i] << endl; return 0;
			}
		}
		x *= 2;
	}
}
