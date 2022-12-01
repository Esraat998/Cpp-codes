#include <bits/stdc++.h>
using namespace std;

void printarr(int arr[][9], int n , int m ){
    for(int i = 0 ; i<=n ; i++){
        for(int j = 0 ; j <=m ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<endl; cout<<endl; cout<<endl;

}
int main(){

   string s1 = "bacad";
   string s2 = "accbadcb";

   int n = s1.size();
   int m = s2.size();

   int arr[n+1][9];
   memset(arr , 0 , sizeof(arr));


   for(int i = 1 ; i<=n ; i++){
    for(int j = 1 ; j<=m ; j++){
        if(s1[i-1] == s2[j-1]){
            arr[i][j] = arr[i-1][j-1] + 1;
        }
        else{
            arr[i][j] = max(arr[i][j-1] , arr[i-1][j]);
        }
    }
   }
    printarr(arr , n , m );
    stack<char> s;
    int i = n ;
    int j = m ;
    while( i && j ){
        int current = arr[i][j];
        int upor = arr[i-1][j];
        int pasher = arr[i][j-1];
        if(current == pasher){
            j = j-1;
        }
        else if(current == upor){
            i = i-1;
        }
        else{
            s.push(s1[i-1]);
            i= i-1;
            j=j-1;
        }
    }

    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }






}

