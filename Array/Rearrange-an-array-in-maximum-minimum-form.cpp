#include<iostream>

using namespace std;

// O(n)
// O(1)
void reArrange2(int arr[], int n){
	
	int mini = 0;
	int maxi = n-1;
	
	int max_ele = arr[n-1]+1;
	
	for(int i=0; i<n; i++){
		
		if(i%2 == 0){
			arr[i] = arr[i] + (arr[maxi]%max_ele)*max_ele;
			maxi--;
		}
		
		else{
			arr[i] = arr[i] + (arr[mini]%max_ele)*max_ele;
			mini++;
		}
		
		
	}
	
	for(int i=0; i<n; i++)
		arr[i] = arr[i]/max_ele;
	
}


// O(n)
// O(n)
void reArrange(int arr[], int n){
	
	int low = 0, high = n-1;
	
	bool flag = true;
	
	int temp[n] = {0};
	
	for(int i=0; i<n; i++){
		
		if(flag)
			temp[i] = arr[high--];
		else
			temp[i] = arr[low++];
			
		flag = !flag;
		
	}
	
	for(int i=0; i<n; i++)
		arr[i] = temp[i];
	
}


int main(){

	
	int arr[] = {1, 3, 4, 5, 8, 9};
	int n = sizeof(arr)/sizeof(int);
	
	reArrange2(arr, n);
	
	for(int i=0; i<n; i++)
		cout<<arr[i]<<' ';

	return 0;
}
