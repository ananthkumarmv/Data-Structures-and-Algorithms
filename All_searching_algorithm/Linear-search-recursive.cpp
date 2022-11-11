#include<iostream>

using namespace std;


int linearSearch(int arr[], int n, int key){
	
	n--;
	
	if(n<0)
		return -1;
		
	if(arr[n]==key)
		return n;
		
	return linearSearch(arr, n, key);
	
}

int linearSearch2(int arr[], int n, int key){
	
	if(n==0)
		return -1;
		
	if(arr[0] == key)
		return 0;
		
	int i = linearSearch(arr+1, n-1, key);
	
	if(i == -1)
		return -1;
		
	return i+1;
}

// implemented like a for loop
int linearSearch3(int arr[], int n, int key, int i=0){         
	
	// stop condition
	if(i==n)                         
		return -1;
		
	// if case
	if(arr[i] == key)
		return i;
	
	// updation
	return linearSearch3(arr, n, key, i+1);
	
}

int main(){
	
	
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(int);
	
	cout<<linearSearch3(arr, n, 5);

	return 0;
}
