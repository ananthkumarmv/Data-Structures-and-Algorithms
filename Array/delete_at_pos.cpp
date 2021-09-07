#include<iostream>

using namespace std;

void deletepos(int *arr, int n, int pos){
	for(int i=pos; i<n;i++){
		arr[i]=arr[i+1];
	}
}


int main(){
	
	int a[5]={1,2,2,3,4};
	int pos;
	cin>>pos;
	int n=sizeof(a)/sizeof(int);
	deletepos(a, n, pos);
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}

