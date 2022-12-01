#include <bits/stdc++.h>
using namespace std;

long long int sum(int n){
	long long int s= 0 ;
	while(n){
		s += n % 10;
		n /= 10;
	}
	return s;
}
int main()
{
	int n;
	cin >> n;
	for(int i = n; ; i++)
	{
		if(sum(i) % 4 == 0){
			cout << i << endl;
			return 0;
		}
	}
}

