#include<iostream>

using namespace std;


void rearrange(int *arr, int n){
	for(int i=0; i<n-1; i++){
		
		if(i%2 == 0 && arr[i] > arr[i+1])
			swap(arr[i], arr[i+1]);
			
		if(i%2 != 0 && arr[i] < arr[i+1])
			swap(arr[i], arr[i+1]);
		
	}
}


int main(){
	
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	
	rearrange(arr, n);
	
	for(int i=0; i<n ;i++)
		cout<<arr[i]<<" ";
	
    return 0;
}


