#include<iostream>

using namespace std;


void insert(int *a, int n, int pos, int key){
	
	for(int i=n; i>=pos; i--){
		a[i]=a[i-1];
	}
	a[pos-1] = key;
}


int main(){
	int a[5]={1,2,4};
	int key, pos;
	cin>>pos>>key;
	int n=sizeof(a)/sizeof(int);
	insert(a, n, pos, key);
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}

