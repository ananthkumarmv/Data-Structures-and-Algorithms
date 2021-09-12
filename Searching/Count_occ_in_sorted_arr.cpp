#include<iostream>

using namespace std;

int lastOcc(int *a, int n, int low, int high, int key){
	while(low<=high){
		int mid = low + (high-low)/2;
		if(a[mid]>key) high=mid-1;
		
		else if(a[mid]>key) low=mid+1;
		
		else{
			if(mid==n-1 || a[mid]!=a[mid+1]) return mid;
			
			else low=mid+1;
		}
	}
	return -1;
}



int firstOcc(int *a, int n, int low, int high, int key){
	while(low<=high){
		int mid=low+(high-low)/2;
		
		if(a[mid]>key) high = mid-1;
		
		else if(a[mid]<key) low=mid+1;
		
		else {
			if(mid==0 || a[mid-1]!=a[mid]) return mid;
			
			high= mid-1;  // to go to left half
			
		}
	}
	return -1;
}



int totOcc(int *a, int n, int low, int high, int key){
	int first = firstOcc(a, n, low, high, key);
	if(first==-1) return 0;
	
	return (lastOcc(a, n, low, high, key)-first+1);
}


int main(){
	
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	int key;
	cin>>key;
	
	cout<<totOcc(a, n, 0, n-1, key);

	return 0;
}
 
