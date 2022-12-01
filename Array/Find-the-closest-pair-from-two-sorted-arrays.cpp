#include<iostream>

using namespace std;

// O(n)
void findClosestPair2(int arr1[], int arr2[], int n1, int n2, int x){
	
	int low = 0;
	int high = n2-1;
	
	int diff = INT_MAX;
	
	int p1, p2;
	
	while(low<n1 && high>=0){
		
		if(diff > abs(arr1[low]+arr2[high]-x)){
			
			diff = abs(arr1[low]+arr2[high]-x);
			p1=low;
			p2=high;
			
		}
		
		if((arr1[low]+arr2[high] > x))
			high--;
		else
			low++;
		
	}
	
	cout<<arr1[p1]<<" "<<arr2[p2];
	
}


// O(n^2)
// O(1)
void findClosestPair(int arr1[], int arr2[], int n1, int n2, int x){
	
	int p1=0, p2=0;
	int diff = INT_MAX;;

	for(int i=0; i<n1; i++){
		for(int j=0; j<n2; j++){
			
			if( diff > abs(arr1[i]+arr2[j]-x)){
				
				diff = abs(arr1[i]+arr2[j]-x);
				
				p1=i;
				p2=j;
			}
				
		}
	}
	
	cout<<arr1[p1]<<" "<<arr2[p2];
	
}


int main(){

	int arr1[] = {1, 4, 5, 7};
	int arr2[] = {10, 20, 30, 40};
	
	int x = 32;
	
	int n1 = *(&arr1 + 1) - arr1;
	int n2 = *(&arr2 + 1) - arr2;
	
	findClosestPair2(arr1, arr2, n1, n2, x);

	return 0;
}
