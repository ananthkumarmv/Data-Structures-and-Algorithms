#include<iostream>

using namespace std;

// O(n)
// O(n)
void fillPrefixSum(int arr[], int n, int prefixSum[]){
	
	prefixSum[0] = arr[0];
	
	for(int i=1; i<n; i++){
		prefixSum[i] = prefixSum[i-1] + arr[i];
	}
	
}

void traversePrefixSum(int prefixSum[], int n){
	
	cout<<prefixSum[0]<<" ";
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			cout<<prefixSum[j]-prefixSum[i]<<" ";
		}
	}

}


int main(){

	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];
		
	int prefixSum[n];
	
	fillPrefixSum(arr, n, prefixSum);
	
	for(int i=0; i<n; i++)
		cout<<prefixSum[i]<<' ';
	
	cout<<"\n";
	traversePrefixSum(prefixSum, n);

	return 0;
}
