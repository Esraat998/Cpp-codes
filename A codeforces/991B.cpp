#include <bits/stdc++.h>
using namespace std;

int main(){
	double n, sum = 0, average = 0, ans = 0;
	cin >> n;
	vector <int> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];

	}
	for(int i = 0; i < n; i++){
		sum += v[i];

	}
	sort(v.begin(), v.end());
	average = sum / n;
	for(int i = 0; i < n; i++){
		if(average >= 4.5) break;
		else{
			sum += 5 - v[i];
			//v[i] = 5;
			average = sum / n;
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
