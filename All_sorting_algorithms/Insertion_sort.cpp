#include<iostream>

using namespace std;

void print_array(int a[],int n){
	cout<<"The sorted array is: "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}


void insertion_sort(int a[], int n){
	int key,j;
	for(int i=1;i<n;i++){
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
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
    insertion_sort(a,n);
    print_array(a,n);
    return 0;
}


