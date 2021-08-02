#include<iostream>
#define ll long long

using namespace std;

int main() {
	
	int m=3, n=2;
	int a[m][n]= {{1,2},{3,4},{5,6}};
	int b[m][n]= {1,2,3,4,5,6};
	int c[][n]= {{1,2},{3,4},{5,6}};
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++) 
			cout<<c[i][j]<<" ";
		cout<<"\n";
	}
		
	
    return 0;
}


