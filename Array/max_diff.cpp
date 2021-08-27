#include<iostream>
#include<cmath>

using namespace std;


void maxdiff(int *arr, int n){
	int res = arr[1]-arr[0];
	for(int i=0;i<n-1; i++)
		for(int j=0;j<n;j++)
			res = max(res, arr[j]-arr[i]);
			
	cout<<res;
}




int main(){
	
	int arr[]{2,3,10,6,4,8,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	maxdiff(arr, n);

	return 0;
}

