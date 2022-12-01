#include <bits/stdc++.h>
using namespace std;

const int n = 1e7;
vector <bool> isprime(n, 1);
void seive(){
	isprime[0] = isprime[1] = 0;
	for(int i = 2 * 2; i * i <= n; i += 2){
		isprime[i] = false;
	}
	for(int i = 2; i <= n; i++){
		if(isprime[i] == true){
			for(int j = i * 2; j < n; j += i){
				isprime[j] = false;
			}
		}
	}
}
int main(){
	vector <int> v;
	seive();
	int k; cin >> k;
	for(int i = 0; i < k; i++){
		if(isprime[i] == true) v.push_back(i);
	}
//	for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
//	cout << endl;
	int num = 0;
	for(int j = 6; j <= k; j++){
		int cnt = 0;
		for(int i = 0; i < v.size(); i++){
			if(j % v[i] == 0 && v[i] < j) cnt++;
		}
		if(cnt == 2) num++;
	}
	cout << num << endl;
	return 0;
}
