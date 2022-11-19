#include<iostream>
#define ll long long

using namespace std;

// O(n)
// O(n)
void reArrangeArray1(int arr[], int n){
	
	int temp[n];
	
	int j = 0;
	for(int i=0; i<n; i++){
		
		temp[arr[i]] = i;
		
	}
	
	for(int i=0; i<n; i++)
		arr[i] = temp[i];
	
}

// O(n)
// O(1)
void reArrangeArray2(int arr[], int n){
	
	for(int i=0; i<n; i++){
		
		arr[arr[i]%n] += i*n;
		
	}
	
	for(int i=0; i<n; i++){
		arr[i] /= n;
	}
	
}

int main(){
	
	
	int arr[]  = {1, 4, 0, 3, 2};
	
	int n = sizeof(arr)/sizeof(int);
	
	reArrangeArray2(arr, n);
	
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	

	return 0;
}
