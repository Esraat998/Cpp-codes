#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, Search, flag = 0, i;
    cin >> n;
    int arr[n];
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> Search;
    for(i = 0; i < n; i++){
        if(arr[i] == Search){
            flag = 1;
            break;
        }
    }
    if(flag){
        cout << "The element is found" << endl;
        cout << "The position of the element is " << i + 1 << endl;
    }
    else{
        cout << "The element is not found";
    }
    return 0;

}
