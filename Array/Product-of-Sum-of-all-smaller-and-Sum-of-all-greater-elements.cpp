#include<iostream>
using namespace std;

void constructArray(int arr[], int n){
	int s, sum;
	
	for(int i=0; i<n; i++){
		s=0, sum=0;
		for(int j=0; j<n; j++){
			if(arr[j] != arr[i]){
				if(arr[i] > arr[j])
					s += arr[j];
					
				else
					sum += arr[j];
			}
		}
		
		cout<<s*sum<<" ";
	}
}


int main(){
	
	int n=4;
	int arr[] = {8, 4, 9, 3};
	
	constructArray(arr, n);

    return 0;
}


