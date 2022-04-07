#include<iostream>
#include<algorithm>
using namespace std;

// This function sorts arr[0..n-1] in wave form, i.e., arr[0] >=
// arr[1] <= arr[2] >= arr[3] <= arr[4] >= arr[5] ....
void sortInWave(int arr[], int n){
	sort(arr, arr+n);
	
	for(int i=0; i<n-1; i+=2){
		
		// If current even ele is smaller than previous
		if(i>0 && arr[i-1] > arr[i])
			swap(arr[i], arr[i-1]);
			
		// If current even ele is smaller than next
		if(i<n-1 && arr[i] < arr[i+1])
			swap(arr[i], arr[i+1]);
	}
	
}


int main(){
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	
	sortInWave(arr, n);
	
	for(int i=0; i<n ;i++)
		cout<<arr[i]<<" ";

    return 0;
}


