#include <bits/stdc++.h>
#define moon long long
using namespace std;

int main(){
	vector <int> v;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}

	for(int i = 0; i < n; i++){
		cout << v[i] << " ";
	}
//	v.push_back(1);
//	v.push_back(2);
//	v.pop_back();
//	v.push_back(3);
//	v.push_back(99);
//	v.push_back(3);
//	v.push_back(11);
//	v.push_back(22);
//	v.pop_back();

//	int sz = v.size();
//	cout << "SIZE : " << sz << endl;
//	for(int i = 0; i < sz; i++){
//		cout << i << "-->" << v[i] << " ";
//	}
	return 0;
}
