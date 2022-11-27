#include<iostream>

using namespace std;

void FindSubArray(int arr[], int n, int sum){
	
	int start = 0;
	
	int currSum = arr[0];
	
	for(int i=1; i<=n; i++){
		
		while(start < i-1 && currSum>sum){
			currSum -= arr[start];
			start++;
		}
		
		if(sum == currSum){
			cout<<"Elements Fount at index \n"<<start<<" and "<<i-1;
			return;
		}
		
		if(i<n)
			currSum += arr[i];
		
	}
	
	cout<<"No subarray found";
	
}


int main(){

	int arr[] = {1, 4, 20, 3, 10, 5};
	
	int n = sizeof(arr)/sizeof(int);
	
	FindSubArray(arr, n, 33);
	
	return 0;
}
