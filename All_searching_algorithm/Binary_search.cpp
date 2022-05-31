#include<iostream>

using namespace std;


void binary_search(int a[], int n, int k){
	int low=0, high=n-1;
	int mid= low + (high - low)/2;
	while(low<=high){
		mid = low + (high - low)/2;
		if(a[mid]==k){
			cout<<"Element "<<k<<" found at position "<<mid+1;
			return;
		} 
		else if(a[mid]<k) low=mid+1;
		else high=mid-1;
	}
}




int main() {
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<endl;
    int a[n];
    cout<<"Enter the elements in ascending order:";
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<endl;
    int k;
    cout<<"Enter the number to search: ";
    cin>>k;
    binary_search(a,n,k);
    return 0;
}

