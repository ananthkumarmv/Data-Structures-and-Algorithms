#include<iostream>

using namespace std;

int findPeak(int arr[], int n){
	
	int l = 0;
	int r = n-1;
	int mid;
	
	while(l <= r){
		
		mid = l + (r - l)>>1;
		
		if(( mid == 0 || arr[mid-1] <= arr[mid] ) && ( mid == n-1 || arr[mid] >= arr[mid+1] ))
			break;
		
		else if(arr[mid] < arr[mid+1])
			l = mid+1;
			
		else
			r = mid-1;	
		
	}
	
	return arr[mid];
	
}

int main(){

	int arr[] = { 1, 3, 20, 4, 1, 0 };
	
	int n = sizeof(arr)/sizeof(int);
	
	cout<<findPeak(arr, n);

	return 0;
}
