#include <bits/stdc++.h>
using namespace std ;

int GCD(int a, int b){
     while(1){
         int mod = a % b ;
         if(mod == 0){
            return b ;
         }
         else{
           a = b ;
           b = mod;
         }
     }
}

int main(){
    int a , b ;
    cin>>a>>b ;
    int lcm = (a * b) / (GCD(a , b));
    cout<<"Our LCM is " << lcm;
}

