#include<iostream>

using namespace std;

void print(int mat[3][2]){
	for(int i=0; i<3;i++){
		for(int j=0; j<2; j++){
			cout<<mat[i][j]<<" ";
		}
	}
}

int main(){
	
	int mat[3][2]={{3,2}, {30, 40}, {50, 60}};
	print(mat);

    return 0;
}


