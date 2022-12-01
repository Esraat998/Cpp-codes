#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    int i, var, j;
    for (i = 1; i < n; i++){
        var = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > var){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = var;
    }
}
void Array(int arr[], int n){
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
        cout << endl;
}
int main(){
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    Array(arr, n);
    return 0;
}
