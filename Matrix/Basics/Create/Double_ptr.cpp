#include<iostream>
#include<algorithm>
#define ll long long

using namespace std;

int main() {
	int m=3, n=2;
	int **arr;
	arr = new int *[m];
	for(int i=0;i<m;i++)
		arr[i]= new int[n];
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			arr[i][j]= i;
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
    
    return 0;
} 
