#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <ll> v;
        for(ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        ll cnt = 0;
        for(int i = 2; i < n; i++)
        {
            if(v[i - 2] < v[i - 1] && v[i - 1] > v[i])
            {
                if(i + 1 < n && v[i - 1] < v[i + 1]) v[i] = v[i + 1];
                else v[i] = v[i-1];
                cnt++;
            }
        }
        cout << cnt << endl;
		for(int i = 0; i < n; i++) cout << v[i] << (i + 1 == n ?"\n":" ");
        cout << endl;
    }
    return 0;
}

