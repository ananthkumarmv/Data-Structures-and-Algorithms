#include<iostream>

using namespace std;

#define n 4

void swapUpperToLower(int mat[][n]){
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
				swap(mat[i][j], mat[j][i]);
		}
	}
	
	for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
	
}

int main(){
	
	int mat[n][n] = { { 2, 3, 5, 6 },
                    { 4, 5, 7, 9 },
                    { 8, 6, 4, 9 },
                    { 1, 3, 5, 6 } };
 
    // Function call
    swapUpperToLower(mat);

	return 0;
}
