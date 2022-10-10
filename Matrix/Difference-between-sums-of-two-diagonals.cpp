#include<iostream>
#include<math.h>
using namespace std;
#define MAX 100

int difference(int mat[][MAX], int n){
	
	int d1=0, d2=0;
	for(int i=0; i<n; i++){
		d1 += mat[i][i];
		
		d2 += mat[i][n-i-1];
	}
	
	return abs(d1-d2);
}

int main(){
	
	int n = 3;
 
    int mat[][MAX] =
    {
        {11, 2, 4},
        {4 , 5, 6},
        {10, 8, -12}
    };
 
    cout << difference(mat, n);

	return 0;
}
