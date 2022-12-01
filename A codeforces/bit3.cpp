#include <bits/stdc++.h>
using namespace std ;
int main(){

    int a = 256;
    int count = 0 ;
    int n = 1 ;

    while(n){
        int res = a & n ;
        if(res != 0)
            count++;
        n = n << 1 ;

    }
    if(count == 1)
        cout<<"Power of 2"<<endl;
    else
        cout<<"Not "<<endl;




}
