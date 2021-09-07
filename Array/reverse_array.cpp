#include<iostream>

using namespace std;



void reverse(int *arr, int n){
	int low=0, high=n-1;
	
	while(low<high){
		int temp = arr[low];
		arr[low]=arr[high];
		arr[high]=temp;
		
		low++;
		high--;
	}
	
}


int main(){
	
	int a[5]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(int);
	reverse(a, n);
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

	return 0;
}

