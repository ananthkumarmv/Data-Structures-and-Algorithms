#include<iostream>
#include<climits>

using namespace std;

void smallestSumSubArray(int arr[], int n){
	
	int min_ending_here = INT_MAX;
	int min_so_far = INT_MAX;
	
	for(int i=0; i<n; i++){
		if(min_ending_here >0)
			min_ending_here = arr[i];
		else
			min_ending_here += arr[i];
			
		min_so_far = min(min_so_far, min_ending_here);
	}
	
	cout<<min_so_far<<"\n";
	
}

int main(){

	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];
		
	smallestSumSubArray(arr, n);

	return 0;
}
