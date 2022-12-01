#include <bits/stdc++.h>
using namespace std;

int main()
{
    int capacity = 850, i =0;
    int weight [] = {100,400, 100, 100, 100, 200 };
//    int price [] = {150 , 400 , 90 , 80 , 50 , 60 };
    while(1)
    {
        if(capacity > weight[i])
        {
            cout<<"Item "<<i << " khabo "<<weight[i]<<endl;
            capacity = capacity - weight[i];
            i++;
        }
        else
        {
            cout<<"Item "<<i <<" khabo "<<capacity<<endl;
            break;
        }

    }

}
