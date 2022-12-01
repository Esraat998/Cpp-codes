/// first i had to check the gcd of a, b & then i checked if it is between x and y
/// Time complexity O(n)

#include <bits/stdc++.h>
#define pair pair<int, int>
#define ll long long
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	int g = __gcd(a, b);
	vector <int> v;
	for(int i = 1; i * i <= g; i++){
		if(g % i == 0){
			if(i * i == g){
				v.push_back(i);
			}
			else{
				v.push_back(i);
				v.push_back(g / i);
			}
		}
	}
	sort(v.begin(), v.end());
	int n;
	cin >> n;
	while(n--){
		int x, y, cnt = 0, ans = -1;
		cin >> x >> y;
		for(int i = 0; i < v.size(); i++){
			if(v[i] >= x && v[i] <= y) ans = max(ans, v[i]);
		}
		cout << ans << endl;
	}
	return 0;
}


