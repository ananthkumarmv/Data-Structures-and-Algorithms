#include<iostream>

//0(r+n-r+r) = 0(n-r)
//space 0(d)

using namespace std;

void leftr(int *arr, int n, int r){
	int temp[r];
	for(int i=0; i<r; i++)
		temp[i] = arr[i];
	
	for(int i=r; i<n; i++)
		arr[i-r] = arr[i];
		
	for(int i=0; i<r; i++)
		arr[n-r+i] = temp[i];
	
	for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
	int arr[]{1,2,3,4,5};
	leftr(arr, 5, 3);

	return 0;
}


