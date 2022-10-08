#include<iostream>
#include<algorithm>
using namespace std;

#define SIZE 10


// O(n^2log2(n))
//  O(n^2)
void sortMat(int mat[SIZE][SIZE], int n){
	
	int temp[n*n];
	int k=0;
	
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			temp[k++] = mat[i][j];
		
	sort(temp, temp+k);
	
	k=0;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			mat[i][j] = temp[k++];
	
}

int main(){
	
	int mat[SIZE][SIZE] = {{5,2,4},
				 {3, 9, 7},
				 {8, 6, 1}};
				 
	int n=3;
	
	sortMat(mat, n);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
		

	return 0;
}
