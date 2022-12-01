#include <bits/stdc++.h>
using namespace std;

int main(){
   int note[] = {1000 , 500 , 200 , 100 , 50 , 20 , 10 , 5 , 2 , 1};
   int taka = 463 ;
   int i = 0 ;

   while(taka){
        if(note[i]<=taka){
           int count = taka / note[i];
           cout<<"We will take "<<note[i]<<" note "<<count<<endl;
           taka = taka - (note[i]*count);
        }
     i++;
   }
}
