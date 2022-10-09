#include<iostream>

using namespace std;

const int MAX = 100;

void printBoundary(int mat[][MAX], int m, int n){
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(i==0 || j==0 || i==n-1 || j==n-1){
				cout<<mat[i][j]<<" ";
			}
			else 
				cout<<" "<<" ";
		}
		cout<<endl;
	}
	
}

int main(){
	
	int mat[4][MAX] = { { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 }};
                      
    printBoundary(mat, 4, 4);

	return 0;
}
