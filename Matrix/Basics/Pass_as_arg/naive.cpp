#include<iostream>
#include<algorithm>
#define ll long long

using namespace std;

void print(int mat[3][2]){
	
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout<<mat[i][j];
		}
}

int main() {
	int mat[][2] = {1, 2, 3, 4, 5, 6}
    print(mat);
    return 0;
}


