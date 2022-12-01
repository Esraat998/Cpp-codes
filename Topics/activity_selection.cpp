#include <bits/stdc++.h>
using namespace std;

int main()
{
    int start[] = {1, 3, 0, 5, 8, 6 };
    int finish[] = {2, 4, 6, 7, 9, 9  };
    int  i = 0, j = 0 ;
    cout<< "Kaaj korbo "<< i <<endl;
    int sz = sizeof(finish) / sizeof(finish[0]);
    while(j < sz)
    {
        if(start[j] >= finish[i])
        {
            i = j;
            cout<< "Kaaj korbo "<<i<<endl;
        }
        j++;
    }
}
