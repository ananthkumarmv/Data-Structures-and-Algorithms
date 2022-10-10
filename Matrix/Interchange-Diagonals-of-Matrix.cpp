#include<iostream>

using namespace std;
#define N 4

void interchangeDiagonals(int mat[][N]){
	
	for(int i=0; i<N; i++){
		swap(mat[i][i], mat[i][N-i-1]);
		
	}
	
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++)
				cout<<mat[i][j]<<" ";
			
		cout<<endl;
	}
	
}

int main(){
	int mat[4][4] = {1, 2, 3, 4,
                     5, 6, 7, 8,
                     1, 2, 3, 4,
					 5, 6, 7, 8};
                    
    interchangeDiagonals(mat);

	return 0;
}
