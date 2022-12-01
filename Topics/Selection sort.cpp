#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int n){
	int index_min, temp;
	for(int i = 0; i < n; i++){
		index_min = i;
		for(int j = i + 1; j < n; j++){
			if(arr[j] < arr[index_min]){
				index_min = j;
			}
		}
		if(index_min != i){
			temp = arr[i];
			arr[i] = arr[index_min];
			arr[index_min] = temp; // swap of index
		}
	}
}
void printArray(int arr[], int n){
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
		cout << endl;
}
int main(){
	int arr[] = {20, 12, 10, 15, 2};
	int n = sizeof(arr) / sizeof(arr[0]);
	SelectionSort(arr, n);
	printArray(arr, n);
	return 0;
}
