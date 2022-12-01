#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {42, 61, 37, 95, 77, 33, 23, 67};
	int n = sizeof(arr) / sizeof(arr[0]);
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - 1; j++){
			if(arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}
