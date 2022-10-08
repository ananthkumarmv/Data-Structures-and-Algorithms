#include<iostream>

using namespace std;

void print3Largest(int arr[], int n){
	
	int first, second, third;
	
	if(n<3)
		return;
	
	third = second = first = INT_MIN;
	
	for(int i=0; i<n; i++){
		
		if(arr[i] > first){
			third = second;
			second = first;
			first = arr[i];
		}
		
		else if(arr[i] > second && arr[i] != first){
			third = second;
			second = arr[i];
		}
		
		else if(arr[i] > third && arr[i] != second){
			third = arr[i];
		}
		
	}
	
	cout<<first<<" "<<second<<" "<<third;
	
}

int main(){
	
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	
	print3Largest(arr, n);

	return 0;
}
