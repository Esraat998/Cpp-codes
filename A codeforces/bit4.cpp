#include <iostream>
using namespace std ;
int main(){
   int a = 25 , b =50 ;
   a = a ^ b;
   b = a ^ b ;
   a = a ^ b ;
   cout<<"a and b is "<<a<<" "<<b <<endl;



}

