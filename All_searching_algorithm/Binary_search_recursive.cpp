#include<iostream>

// 0(logn)
// 0(logn)

using namespace std;


int brSearch(int *a, int low, int high, int key){
	
	if(low>high) return -1;
	
	int mid = low+ (high-low)/2;
	
	if(a[mid]==key) return mid;
	
	else if(a[mid]>key) return brSearch(a, low, mid-1, key);
	
	else return brSearch(a, mid+1, high, key);
}



int main(){
	
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	int key;
	cin>>key;
	
	cout<<brSearch(a, 0, n-1, key);
	return 0;
}

