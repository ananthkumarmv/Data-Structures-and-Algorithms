#include<iostream>

using namespace std;


void removeDuplicate(int *arr, int n){
	
	bool mark[n];
	
	// initializing the boolean array mark[n] by True
    // assuming that all elements are unique
   for(int i=0; i<n; i++)
   		mark[i] = true;
   	
   	for(int i=0; i<n; i++){
   		if(mark[i] == true){
   			for(int j=i+1; j<n; j++)
   				if(arr[i] == arr[j])
   					mark[j] = false;
		}
	}
	   
	for(int i=0; i<n; i++){
		if(mark[i] == true)
			cout<<arr[i]<<" ";
	}
	
}


int main(){
	
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];
		
	removeDuplicate(arr, n);

	
    return 0;
}

