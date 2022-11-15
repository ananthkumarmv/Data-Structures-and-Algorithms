#include<iostream>

using namespace std;

#define n 4

void interchangeFirstLast(int m[][n]){
	
	for(int i=0; i<n; i++){
		
		swap(m[0][i], m[n-1][i]);
		
	}
	
}

int main(){
	
	int m[n][n] = { { 8, 9, 7, 6 },
                    { 4, 7, 6, 5 },
                    { 3, 2, 1, 8 },
                    { 9, 9, 7, 7 } };
 
 	
	interchangeFirstLast(m);
	
	for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << m[i][j] << " ";
        cout<<"\n";
	}

	return 0;
}
