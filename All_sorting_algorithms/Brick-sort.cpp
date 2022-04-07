#include<iostream>

using namespace std;

void brickSort(int arr[], int n){
	
	bool isSorted = false;  // Initially array is unsorted
	
	while(!isSorted){
		isSorted = true;
		
		// performing bubble sort on odd indexed element
		for(int i=1; i<=n-2; i=i+2){
			if(arr[i] > arr[i+1]){
				swap(arr[i], arr[i+1]);
				isSorted = false;
			}
		}
		
		for(int i=0; i<=n-2; i=i+2){
			if(arr[i] > arr[i+1]){
				swap(arr[i], arr[i+1]);
				isSorted = false;
			}
		}
		
	}
	
	return;
}


int main(){
	
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	
	brickSort(arr, n);
	
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";

    return 0;
}


