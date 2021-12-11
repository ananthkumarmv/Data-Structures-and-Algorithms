#include<iostream>

using namespace std;

void findBitonicSubarray(int arr[], int n){
	if(n<0) return;
	
	// 'I[i]' stores the length of the longest increasing subarray,
	// ending at 'arr[i]'
	int I[n];
	I[0] = 1;
	for(int i=0; i<n; i++){
		I[i] = 1;
		if(arr[i-1] < arr[i]){
			I[i] = I[i-1] + 1;
		}
	}
	
	// 'D[i]' stores the length of the longest decreasing subarray,
	// staring with 'arr[i]'
	int D[n];
	D[n-1] = 1;
	for(int i= n-2; i>=0; i--){
		D[i] = 1;
		if(arr[i] > arr[i+1]){
			D[i] = D[i+1] +1;
		}
	}
	
	// consider each element as a peak and calculate LBS
	int lbs_len = 1;
	int beg = 0, end=0;
	
	for(int i=0; i<n; i++){
		if(lbs_len < I[i] + D[i] -1){
			lbs_len = I[i] + D[i] -1;
			beg = i-I[i] +1;
			end = i+ D[i]-1;
		}
	}
	
	// print the longest bitonic subarray
	cout<<"The length of the longest bitonic subarray is "<<lbs_len<<endl;
	cout<<"The longest bitonic subarray indices is "<<beg<<" "<<end;
	
} 


int main(){
	
	int A[] = { 3, 5, 8, 4, 5, 9, 10, 8, 5, 3, 4 };
	int n = sizeof(A) / sizeof(A[0]);
	
	findBitonicSubarray(A, n);

    return 0;
}


