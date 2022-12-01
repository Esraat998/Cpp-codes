#include <bits/stdc++.h>
using namespace std;

int binarySearch(int array[], int x, int low, int high) {
      while (low <= high) {
        int mid = low + (high - low) / 2;

        if (array[mid] == x)
          return mid;

        if (array[mid] < x)
          low = mid + 1;

        else
          high = mid - 1;
      }

      return -1;
    }

    int main(){
      int array[7] = {3, 4, 5, 6, 7, 8, 9};
      int x = 4;
      int result = binarySearch(array, x, 0, 7 - 1);

      if (result == -1)
        cout << "NOT FOUND" << endl;
      else
        cout << "THE Element is found in index  " << result << endl;
    }
