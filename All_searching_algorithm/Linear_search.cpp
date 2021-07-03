#include<iostream>

using namespace std;


void linear_search(int a[], int n, int k){
	for(int i=0;i<n;i++){
		if(a[i]==k){
			cout<<"Element "<<k<<" found at position "<<i+1;
			return;
		} 
		
	}
	cout<<"Element not found";
}



int main() {
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<endl;
    int a[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<endl;
    int k;
    cout<<"Enter the number to search: ";
    cin>>k;
    linear_search(a,n,k);
    return 0;
}

