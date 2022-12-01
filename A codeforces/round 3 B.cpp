#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int day;
		int month;
		int year;
		cin >> day >> month >> year;
		if(month == 1){
			month = 13;
			year--;
		}
		if(month == 2){
			month = 14;
			year--;
		}
		int x = year % 100;
		int y = year / 100;
		int h = day + 13 * (month + 1) / 5 + x + x / 4 + y / 4 + 5 * y;
		h = h % 7;
		if(h == 0) cout << "Saturday" << endl;
		else if(h == 1) cout << "Sunday" << endl;
		else if(h == 2) cout << "Monday" << endl;
		else if(h == 3) cout << "Tuesday" << endl;
		else if(h == 4) cout << "Wednesday" << endl;
		else if(h == 5) cout << "Thursday" << endl;
		else cout << "Friday" << endl;
	}
	return 0;
}
