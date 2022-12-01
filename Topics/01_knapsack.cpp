#include <bits/stdc++.h>
using namespace std;

int main(){
	int capacity = 7;
	int wt[] = {1, 3, 4, 5};
	int val[] = {1, 4, 5, 7};
	int item = 4;
	int mat[item + 1][capacity + 1];

	for(int i = 0; i <= item; i++){
		for(int j = 0; j <= capacity; j++){
			if(i == 0 || j == 0){
				mat[i][j] = 0;
			}
			else if(j < wt[i - 1]){
				mat[i][j] = mat[i - 1][j];
			}
			else{
				int nibona = mat[i - 1][j];
				int ojon = wt[i - 1];
				int nibo = val[i - 1] + mat[i - 1][j - ojon];
				mat[i][j] = max(nibo, nibona);
			}
		}
	}
	for(int i = 0; i <= item; i++){
		for(int j = 0; j <= capacity; j++){
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
	int j = capacity;
	for(int i = item; i > 0; ){
		if(mat[i][j] == mat[i - 1][j]){
			i--;
		}
		else{
			cout << "eta nibo " << i << endl;
			j = j - wt[i - 1];
			--i;
		}
	}
	return 0;
}
