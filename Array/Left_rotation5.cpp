#include<iostream>

using namespace std;

void reverse(int arr[], int low, int high){
	while(low<high){
		swap(arr[high], arr[low]);
		low++;
		high--;
	}
}


void leftRotate(int arr[], int d, int n){
	reverse(arr, 0, d-1);
	reverse(arr, d, n-1);
	reverse(arr, 0, n-1);
}



int main(){
	
	int a[5]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(int);
	int d;
	cin>>d;
	leftRotate(a, d, n);
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}

