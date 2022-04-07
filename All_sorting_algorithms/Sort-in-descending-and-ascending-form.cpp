#include<iostream>
#include<algorithm>

using namespace std;


void sortInDescAsc(int arr[], int n, int k){
	
	// sorting array in ddescending order
	sort(arr, arr+n, greater<int>());
	
	// sorting last (n-k) array
	// eles in ascending order
	sort(arr+k, arr+n);
	
}


int main(){
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	
	int k;
	cin>>k;
	
	sortInDescAsc(arr, n, k);
	
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";

    return 0;
}


