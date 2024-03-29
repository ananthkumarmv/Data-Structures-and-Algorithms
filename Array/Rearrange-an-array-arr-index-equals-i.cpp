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
		
		if(arr[i] != -1 && arr[i] != i ){
			
			int x = arr[i];
			
			while(arr[x] != -1 && arr[x] != x){
				
				int y = arr[x];
				
				arr[x] = x;
				
				x = y;
				
			}
			
			arr[x] = x;
			
			if(arr[i] != i){
				arr[i] = -1;
			}
			
		}
		
	}
	
}


int main(){
	
	int arr[] = { -1, -1, 6, 1, 9, 3, 2, -1, 4, -1 };
	
	int n = sizeof(arr) / sizeof(arr[0]);
	
		
	fixArray(arr, n);
	
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";

	return 0;
}
