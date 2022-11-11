#include<iostream>

using namespace std;

// from left to right
int lastOccur(int arr[], int n, int key){
	
	if(n == 0){
		return -1;
	}
	
	int i = lastOccur(arr+1, n-1, key);
	
	if(i == -1){
		
		if(arr[0] == key)
			return 0;
		
		else
			return -1;
		
	}
	
	return i+1;
	
}

// from right to left
int lastOccur2(int arr[], int n, int key){
	
	n--;
	
	if(n<0)
		return -1;
		
	if(arr[n] == key)
		return n;
	
	return lastOccur2(arr, n-1, key);
	
}


int main(){
	
	
	int arr[] = {5,2,5,4,5};
	int n = sizeof(arr)/sizeof(int);
	
	cout<<lastOccur(arr, n, 5);

	return 0;
}
