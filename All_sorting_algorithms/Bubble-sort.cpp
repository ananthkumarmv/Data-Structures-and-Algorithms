#include<iostream>

using namespace std;

void print_array(int a[],int n){
	cout<<"The sorted array is: "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}


void swap(int *num1, int *num2){
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}


void bubble_sort(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]) swap(&a[j],&a[j+1]);
		}
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
    bubble_sort(a,n);
    print_array(a,n);
    return 0;
}


