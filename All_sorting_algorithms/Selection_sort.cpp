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


void selection_sort(int a[], int n){
	int pos=0;
	for(int i=0;i<n-1;i++){
		pos = i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[pos]) pos = j;
		}
		swap(&a[i], &a[pos]);
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
    selection_sort(a,n);
    print_array(a,n);
    return 0;
}



