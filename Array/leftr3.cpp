#include<iostream>

using namespace std;


void leftr(int arr[], int d, int n){
	int temp[d];
	for(int i=0;i<d;i++){
		temp[i]= arr[i];
	}
	for(int i=d;i<n;i++){
		arr[i-d]=arr[i];
	}
	for(int i=0;i<d;i++){
		arr[n-d+i] = temp[i];
	}
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

