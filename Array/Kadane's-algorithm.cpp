#include<iostream>
#include<climits>

using namespace std;


// Function to print contiguous subarray with the largest sum
// in a given set of integers.

void kadane(int arr[], int n){
	if(n<=0) return;
	
	// stores maximum sum subarray found so far
	int max_so_far = INT_MIN;
	
	// stores the maximum sum of subarray ending at the current position
	int max_ending_here =0;
	
	// stores endpoints of maximum sum subarray found so far
	int start =0, end=0;
	
	// stores starting index of a positive-sum sequence
	int beg = 0;
	
	for(int i=0; i<n; i++){
		// update the max sum of sub array "ending" at index 'i'
		max_ending_here = max_ending_here + arr[i];
		
		// if the max sum becomes less than the current element,
		// start from the current element.
		if(max_ending_here < arr[i]){
			max_ending_here = arr[i];
			beg = i;
		}
		
		// update result if the current subarray sum is found to be greater
		if(max_so_far < max_ending_here){
			max_so_far = max_ending_here;
			start = beg;
			end = i;
		}
	}
	
	cout << "The contiguous subarray with the largest sum is ";
	for(int i=start; i<=end; i++){
		cout<<arr[i]<<" ";
	}
}


int main(){
	
	int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
	
	int n = sizeof(arr)/sizeof(arr[0]);
 
    kadane(arr, n);


    return 0;
}


