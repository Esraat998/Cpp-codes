#include <bits/stdc++.h>
using namespace std;

void Merge(int arr[], int left, int mid, int right){
	int i, j, k;
	int n1 = mid - left + 1;  ///size of left temp array
	int n2 = right - mid;      ///size of right temp array

 	int L[n1], R[n2]; /// two half temp array

	for (i = 0; i < n1; i++)
		L[i] = arr[left + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[mid + 1 + j];

	i = 0; ///index of subarray
	j = 0;
	k = left; /// merge index
	while (i < n1 && j < n2){
		if (L[i] <= R[j]){
			arr[k] = L[i];
			i++;
		}
		else{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1){ /// remaining elements of array merging
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int left, int right){
	if (left < right) {
		int mid = left + (right - left) / 2;
		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);

		Merge(arr, left, mid, right);
	}
}

void printArray(int A[], int n){
	for (int i = 0; i < n; i++)
		cout << A[i] << " ";
		cout << endl;
}

int main(){
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	mergeSort(arr, 0, arr_size - 1);
	printArray(arr, arr_size);
	return 0;
}
