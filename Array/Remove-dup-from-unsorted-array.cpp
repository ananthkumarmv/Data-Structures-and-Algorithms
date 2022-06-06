#include<iostream>

using namespace std;

int removeDuplicate(int *arr, int n){
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			
			if(arr[i] == arr[j]){
				 // deleting the current position of the duplicate element  
				for(int k=j; k<n-1; k++){
					arr[k] = arr[k+1];
				}
				
				// decreasing the size of the array
				n--;
				
				// if the position of the elements is changes, don't increase the index j  
				j--;
			}
			
		}
	}
	
	return n;
	
}


int main(){
	
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];
		
	n = removeDuplicate(arr, n);
	
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" "<<endl;
	

    return 0;
}

