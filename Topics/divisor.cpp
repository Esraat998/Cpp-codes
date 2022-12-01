#include <bits/stdc++.h>
using namespace std;

int main(){

///TC o(sqrt(n))
//	int n; cin >> n;
//	int sum = 0;
//	vector <int> v;
//	for(int i = 1; i <= sqrt(n); i++){
//		if(n % i == 0){
//			v.push_back(i);
//			sum += i;
//			if(n / i != i){
//				v.push_back(n / i);
//				sum += n / i;
//			}
//		}
//	}
//	sort(v.begin(), v.end());
//	for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
//	cout << endl;
//	cout << "total sum is " << sum << endl;

	int n; cin >> n;
	vector <int> v;
	map <int, int> mp;
	for(int i = 2; i < n; i++){
		if(i == 2 || i == 3 || i == 5){
			if(n % i == 0) {
				v.push_back(i);
				n = n / i;
			}
		}
	}
	for(int i = 0; i < n; i++){
		mp[v[i]]++;
	}
	int sum = 1;
	for(auto it : mp){
		int num = (pow(it.first, it.second + 1) - 1) / (it.first - 1);
		sum *= num;
	}
	cout << sum << endl;
	for(auto &x : v) cout << x << " ";
	cout << endl;

	return 0;
}
