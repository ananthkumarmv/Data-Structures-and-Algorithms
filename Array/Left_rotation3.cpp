#include<iostream>

// 0(nd)
// 0(1)

using namespace std;

void leftrotate(int *arr, int n){
	int temp = arr[0];
	for(int i=0;i<n;i++)
		arr[i-1] = arr[i];
	arr[n-1]=temp;
}


void leftr(int *arr, int n, int r){
	for(int i=0;i<r;i++) 
		leftrotate(arr, n);
}

int main(){
	int arr[]{1,2,3,4,5};
	leftr(arr, 5, 3);
	for(int i=0;i<5;i++) cout<<arr[i]<<" ";
	return 0;
}

