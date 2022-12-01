#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
using namespace std;

int main(){
	int num;
  	cout << "Enter an integer: ";
   	cin >> num;
  	if (num != 0){
    	if (num > 0){
      		cout << "num var is positive." << endl;
    	}
    	else{
      		cout << "num var is negative." << endl;
		}
	}
  	else{
		cout << "num is equal zero nor positive or negative" << endl;
	}
	cout << "This line is always printed" << endl;
	return 0;
}





