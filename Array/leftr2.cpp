#include<iostream>

using namespace std;


void rotate(int *arr, int n){
	int temp=arr[0];
	
	for(int i=0;i<n;i++) arr[i]=arr[i+1];
	
	arr[n-1]=temp;
}


void leftr(int *arr, int n, int d){
	for(int i=0;i<d;i++)
		rotate(arr, n);
}


int main(){
	
	int a[5]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(int);
	int d;
	cin>>d;
	leftr(a, n, d);
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}

