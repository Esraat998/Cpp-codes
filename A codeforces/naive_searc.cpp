#include <bits/stdc++.h>
using namespace std;

int main(){
     string text = "aabwoubhjouc";
     string pat = "ou";
     int n = text.size();
     int m = pat.size();
     for(int i = 0 ; i < n-m ; i++){
        for(int j = 0 ; j < m ; j++){
              if(text[i+j] != pat[j]){
                    break;
              }
              if(j == m-1){
                cout<<"word found at "<<i<<endl;
              }
          }

     }
     return 0;
}

