#include <iostream>
#include <time.h>

using namespace std ;
int main(){

    const clock_t begin_time = clock();
    int a =100;
    while(a--){
           cout<<"My name is paul"<<endl;

    }
    const clock_t end_time = clock();
    cout<< float(end_time - begin_time) /  CLOCKS_PER_SEC;







}

