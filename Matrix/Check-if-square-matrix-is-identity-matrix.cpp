#include<iostream>

using namespace std;
const int MAX = 100;

bool isIdentity(int mat[][MAX], int n){
	
	for(int row=0; row<n; row++){
		for(int col=0; col<n; col++){
			if(row == col && mat[row][col] != 1)
				return false;
				
			else if(row != col && mat[row][col] != 0)
				return false;
		}
	}
	
	return true;
}

int main(){
	
	int N = 4;
    int mat[][MAX] = {{1, 0, 0, 0},
                    {0, 1, 0, 0},
                    {0, 0, 1, 0},
                    {0, 0, 0, 1}};
    if (isIdentity(mat, N))
       cout << "Yes ";
    else
       cout << "No ";

	return 0;
}
