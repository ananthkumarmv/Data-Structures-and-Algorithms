#include<iostream>

using namespace std;

int storeOccur(int arr[], int n, int key, int out[], int i=0, int j=0){
	
	if(i == n)
		return j;
		
	if(arr[i] == key){
		out[j] = i;
		return storeOccur(arr, n, key, out, i+1, j+1);
	}
	
	return storeOccur(arr, n, key, out, i+1, j);
	
}


void allOccur(int arr[], int n, int key, int i=0){
	
	if(i==n)
		return;
		
	if(arr[i] == key)
		cout<<i<<" ";
	
	allOccur(arr, n, key, i+1);
	
}

int main(){
	
	int arr[] = {5,2,5,4,5};
	int n = sizeof(arr)/sizeof(int);
	
	allOccur(arr, n, 5);
	
	cout<<"\n";
	
	int out[100];
	
	int cnt = storeOccur(arr, n, 5, out);
	
	for(int i=0; i<cnt; i++)
		cout<<out[i]<<" ";

	return 0;
}
