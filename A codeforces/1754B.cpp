#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector <int> v, vv, vw;
        int j = 1;
        for(int i = 0; i < n; i++){
            v.push_back(j); j++;
        }
        int a = n / 2;
        for(int i = 0; i < a; i++){

            vv.push_back(v[i + a]);
            vv.push_back(v[i]);
        }
        if(n % 2 == 1) vv.push_back(v[n - 1]);
        reverse(vv.begin(), vv.end());
        for(int i = 0; i < vv.size(); i++) cout << vv[i] << " ";
        cout << endl;
    }
    return 0;
}
