#include<iostream>

using namespace std;


void leftr(int *a, int n){
	int temp=a[0];
	
	for(int i=0;i<n;i++){
		a[i]=a[i+1];
	}
	a[n-1]=temp;
}



int main(){
	int a[5]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(int);
	leftr(a, n);
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}

