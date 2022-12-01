#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int Ar, Ac, Br, Bc, Fr, Fc;
		cin >> Ar >> Ac >> Br >> Bc >> Fr >> Fc;
		if(Ar > Br || Ac > Bc){
			swap(Ar, Br);
			swap(Ac, Bc);
		}
		int ans = abs(Ar - Br) + abs(Ac - Bc);
		if((Ar == Fr && Br == Fr ) || (Ac == Fc && Bc == Fc)){
			if((Ac < Fc && Fc < Bc) || (Ar < Fr && Fr < Br)){
				ans += 2;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
