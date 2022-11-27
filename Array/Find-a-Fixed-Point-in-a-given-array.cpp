#include<iostream>

using namespace std;

int binarySearch(int arr[], int n){
	
	int l=0, r=n-1;
	int mid;
	
	while(l<=r){
		
		mid = l + (r-l)/2;
		
		if(arr[mid] == mid)
			return mid;
			
		else if(arr[mid]>mid)
			r = mid-1;
		
		else
			l = mid+1;
		
	}
	
	return -1;
	
}


int main(){

	int arr[] = {-10, -1, 0, 3, 10, 11, 30, 50, 100};
	
	int n = sizeof(arr)/sizeof(int);
	
	cout<<binarySearch(arr, n);

	return 0;
}
