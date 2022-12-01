#include <bits/stdc++.h>
using namespace std;
int main(){
    long long test,odd=0;
    cin>>test;
    while(test--){
        int n;
        cin>>n;

        long long a,count=0;
        for(int i=n;i>=1;i--){
            a=2*i;
            if(a<=n){

            }
            else{
                //cout<<a<<endl;
                count++;
            }
        }
        cout<<count<<endl;

    }
    return 0;
}
