#include<iostream>

using namespace std;



int findElement(int *arr, int n){
	
	int leftMax[n];
	leftMax[0] = INT_MIN;
	
	for(int i=1; i<n; i++)
		leftMax[i] = max(leftMax[i-1], arr[i-1]);
	
	int rightMin = INT_MAX;
	
	for(int i=n-1; i>=0; i--){
		if(leftMax[i] < arr[i] && rightMin > arr[i])
			return i;
			
			// updating right minimum
			rightMin = min(rightMin, arr[i]);
	}
	
	return -1;
	
}


int main(){
	
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	
	cout<<findElement(arr, n);

    return 0;
}


