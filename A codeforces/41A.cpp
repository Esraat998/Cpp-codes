#include <bits/stdc++.h>
using namespace std;

int main(){
    string n, t;
    cin >> n >> t;
    reverse(n.begin(), n.end());
    if(n == t){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
