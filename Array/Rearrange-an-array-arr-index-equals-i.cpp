#include<iostream>

using namespace std;

// O(n^2)
// O(1)
void fixArray1(int arr[], int n){
	
	int temp;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(arr[j] == i){
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
				break;
			}
		}
	}
	
	for(int i=0; i<n; i++)
		if(arr[i] != i)
			arr[i] = -1;
	
}

// O(n)
// O(1)

void fixArray(int arr[], int n){
	
	for(int i=0; i<n; i++){
		
		if(arr[i] )
		
	}
	
}


int main(){
	int n;
	cin>>n;
	
	int arr[n];
	
	for(int i=0; i<n; i++) 
		cin>>arr[i];
		
	fixArray(arr, n);
	
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";

	return 0;
}
