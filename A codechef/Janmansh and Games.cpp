#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b, sum = 0;
		cin >> a >> b;
		while(b > 0){
			if(b % 2 == 0) a += 2;
			else{
				if(b == 1) a--;
				else a -= 2;
			}
			b -= 2;
		}
		if(a % 2 == 0) cout << "Janmansh" << endl;
		else cout << "Jay" << endl;
//		vector <int> v;
//		for(int i = 0; i < n; i++){
//			int x;
//			cin >> x;
//			v.push_back(x);
//		}

	}
	return 0;
}

