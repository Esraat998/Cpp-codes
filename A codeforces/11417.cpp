#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
	while(1){
		int mod = a % b ;
		if(mod == 0){
			return b ;
		}
		else{
			a = b ;
			b = mod;
		}
	}
}

int main(){
	while(1){
		int N;
		cin >> N;
		if(N == 0) return 0;
		int G=0;
		for(int i = 1; i < N; i++)
		for(int j = i + 1; j <= N; j++){
			G += GCD(i, j);
		}
		cout << G << endl;

	}
}
