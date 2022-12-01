#include <iostream>

using namespace std ;
int main(){

   int a = 4;
   int x = a &(a<<1);
   if(x == 0){
    cout<<"Sparse";
   }
   else{
    cout<<"NOT";
   }




}

