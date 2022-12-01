#include <bits/stdc++.h>
using namespace std;

int main(){
	vector <int> v;
	int n, chest = 0, biceps = 0, back = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	for(int i = 0; i < n; i+=3){
		chest += v[i];
	}
	for(int i = 1; i < n; i+=3){
		biceps += v[i];
	}
	for(int i = 2; i < n; i+=3){
		back += v[i];
	}
	//cout << chest << " " << biceps << " " << back << endl;
	if(chest > biceps && chest > back){
	 cout << "chest" << endl;
	}
	else if(biceps > chest && biceps > back){
		cout << "biceps" << endl;
	}
	else{
		cout << "back" << endl;
	}
	return 0;
}
